#include "SerialPortDialog.h"
#include <QDebug>
SerialPortDialog::SerialPortDialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	initPort();
	connect(ui.openBtn, SIGNAL(clicked()), this, SLOT(on_openBtn_clicked()));
}

SerialPortDialog::~SerialPortDialog()
{
}
//初始化串口信息
void SerialPortDialog::initPort()
{
	//读取串口信息
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		qDebug() << "Name:" << info.portName();
		qDebug() << "Description:" << info.description();
		qDebug() << "Manufacturer:" << info.manufacturer();



		//这里相当于自动识别串口号之后添加到了cmb，如果要手动选择可以用下面列表的方式添加进去
		QSerialPort serial;
		serial.setPort(info);
		if (serial.open(QIODevice::ReadWrite))
		{
			//将串口号添加到cmb
			ui.cmbPortName->addItem(info.portName());
			//关闭串口等待人为(打开串口按钮)打开
			serial.close();
		}
	}

	QStringList baudList;//波特率
	QStringList parityList;//校验位
	QStringList dataBitsList;//数据位
	QStringList stopBitsList;//停止位

	baudList << "50" << "75" << "100" << "134" << "150" << "200" << "300"
		<< "600" << "1200" << "1800" << "2400" << "4800" << "9600"
		<< "14400" << "19200" << "38400" << "56000" << "57600"
		<< "76800" << "115200" << "128000" << "256000";

	ui.cmbBaudRate->addItems(baudList);
	ui.cmbBaudRate->setCurrentIndex(12);

	parityList << "无" << "奇" << "偶";
	parityList << "标志";
	parityList << "空格";

	ui.cmbParity->addItems(parityList);
	ui.cmbParity->setCurrentIndex(0);

	dataBitsList << "5" << "6" << "7" << "8";
	ui.cmbDataBits->addItems(dataBitsList);
	ui.cmbDataBits->setCurrentIndex(3);

	stopBitsList << "1";
	stopBitsList << "1.5";
	stopBitsList << "2";

	ui.cmbStopBits->addItems(stopBitsList);
	ui.cmbStopBits->setCurrentIndex(0);



	//设置按钮可以被按下
	ui.openBtn->setCheckable(true);

}
//设置控件的状态
void SerialPortDialog::setSelectable()
{
	ui.cmbBaudRate->setEnabled(true);
	ui.cmbDataBits->setEnabled(true);
	ui.cmbFlowControl->setEnabled(true);
	ui.cmbParity->setEnabled(true);
	ui.cmbPortName->setEnabled(true);
	ui.cmbStopBits->setEnabled(true);

	ui.openBtn->setText("打开串口");
}
void SerialPortDialog::setNonSelectable()
{
	ui.cmbBaudRate->setEnabled(false);
	ui.cmbDataBits->setEnabled(false);
	ui.cmbFlowControl->setEnabled(false);
	ui.cmbParity->setEnabled(false);
	ui.cmbPortName->setEnabled(false);
	ui.cmbStopBits->setEnabled(false);

	ui.openBtn->setText("关闭串口");
}
void SerialPortDialog::wirteinfomation(char *cmd)
{
	
	my_serialport->write(cmd);
	qDebug() << cmd << endl;
}
QString SerialPortDialog::readSerialInfomation()
{
	return Cmd;

}
void SerialPortDialog::on_openBtn_clicked()
{
	if (ui.openBtn->text() == "打开串口")
	{
		my_serialport = new QSerialPort(this);

		//设置串口号
		my_serialport->setPortName(ui.cmbPortName->currentText());
		//以读写方式打开串口
		if (my_serialport->open(QIODevice::ReadWrite))
		{
			//设置波特率
			my_serialport->setBaudRate(ui.cmbBaudRate->currentText().toInt());
			//设置数据位
			my_serialport->setDataBits(QSerialPort::Data8);
			//设置校验位
			my_serialport->setParity(QSerialPort::NoParity);
			//设置流控制
			my_serialport->setFlowControl(QSerialPort::NoFlowControl);
			//设置停止位
			my_serialport->setStopBits(QSerialPort::OneStop);

			//每秒读一次
			timer = new QTimer(this);
			connect(timer, SIGNAL(timeout()), this, SLOT(readComDataSlot()));


			timer->start(1000);

			setNonSelectable();
			emit readingSerialSignal();
			QMessageBox::about(NULL, "提示", "串口打开成功！");
			return;
		}
		
		else
		{
			QMessageBox::about(NULL, "提示", "串口没有打开！");
			return;
		}
	}
	else
	{
		timer->stop();
		setSelectable();
		my_serialport->close();
	}

}
//读取串口数据
void SerialPortDialog::readComDataSlot()
{
	//读取串口数据
	QByteArray readComData = my_serialport->readAll();

	//将读到的数据显示到数据接收区的te中
	if (readComData != "")
	{
		Cmd = readComData;
		qDebug()<< Cmd << endl;
		emit getSerialInformationSignal();
	}

	//清除缓冲区
	readComData.clear();



}
