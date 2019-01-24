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
//��ʼ��������Ϣ
void SerialPortDialog::initPort()
{
	//��ȡ������Ϣ
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		qDebug() << "Name:" << info.portName();
		qDebug() << "Description:" << info.description();
		qDebug() << "Manufacturer:" << info.manufacturer();



		//�����൱���Զ�ʶ�𴮿ں�֮����ӵ���cmb�����Ҫ�ֶ�ѡ������������б�ķ�ʽ��ӽ�ȥ
		QSerialPort serial;
		serial.setPort(info);
		if (serial.open(QIODevice::ReadWrite))
		{
			//�����ں���ӵ�cmb
			ui.cmbPortName->addItem(info.portName());
			//�رմ��ڵȴ���Ϊ(�򿪴��ڰ�ť)��
			serial.close();
		}
	}

	QStringList baudList;//������
	QStringList parityList;//У��λ
	QStringList dataBitsList;//����λ
	QStringList stopBitsList;//ֹͣλ

	baudList << "50" << "75" << "100" << "134" << "150" << "200" << "300"
		<< "600" << "1200" << "1800" << "2400" << "4800" << "9600"
		<< "14400" << "19200" << "38400" << "56000" << "57600"
		<< "76800" << "115200" << "128000" << "256000";

	ui.cmbBaudRate->addItems(baudList);
	ui.cmbBaudRate->setCurrentIndex(12);

	parityList << "��" << "��" << "ż";
	parityList << "��־";
	parityList << "�ո�";

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



	//���ð�ť���Ա�����
	ui.openBtn->setCheckable(true);

}
//���ÿؼ���״̬
void SerialPortDialog::setSelectable()
{
	ui.cmbBaudRate->setEnabled(true);
	ui.cmbDataBits->setEnabled(true);
	ui.cmbFlowControl->setEnabled(true);
	ui.cmbParity->setEnabled(true);
	ui.cmbPortName->setEnabled(true);
	ui.cmbStopBits->setEnabled(true);

	ui.openBtn->setText("�򿪴���");
}
void SerialPortDialog::setNonSelectable()
{
	ui.cmbBaudRate->setEnabled(false);
	ui.cmbDataBits->setEnabled(false);
	ui.cmbFlowControl->setEnabled(false);
	ui.cmbParity->setEnabled(false);
	ui.cmbPortName->setEnabled(false);
	ui.cmbStopBits->setEnabled(false);

	ui.openBtn->setText("�رմ���");
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
	if (ui.openBtn->text() == "�򿪴���")
	{
		my_serialport = new QSerialPort(this);

		//���ô��ں�
		my_serialport->setPortName(ui.cmbPortName->currentText());
		//�Զ�д��ʽ�򿪴���
		if (my_serialport->open(QIODevice::ReadWrite))
		{
			//���ò�����
			my_serialport->setBaudRate(ui.cmbBaudRate->currentText().toInt());
			//��������λ
			my_serialport->setDataBits(QSerialPort::Data8);
			//����У��λ
			my_serialport->setParity(QSerialPort::NoParity);
			//����������
			my_serialport->setFlowControl(QSerialPort::NoFlowControl);
			//����ֹͣλ
			my_serialport->setStopBits(QSerialPort::OneStop);

			//ÿ���һ��
			timer = new QTimer(this);
			connect(timer, SIGNAL(timeout()), this, SLOT(readComDataSlot()));


			timer->start(1000);

			setNonSelectable();
			emit readingSerialSignal();
			QMessageBox::about(NULL, "��ʾ", "���ڴ򿪳ɹ���");
			return;
		}
		
		else
		{
			QMessageBox::about(NULL, "��ʾ", "����û�д򿪣�");
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
//��ȡ��������
void SerialPortDialog::readComDataSlot()
{
	//��ȡ��������
	QByteArray readComData = my_serialport->readAll();

	//��������������ʾ�����ݽ�������te��
	if (readComData != "")
	{
		Cmd = readComData;
		qDebug()<< Cmd << endl;
		emit getSerialInformationSignal();
	}

	//���������
	readComData.clear();



}
