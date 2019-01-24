#include "SerialPortSoftWare.h"
void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
	static QMutex mutex;
	mutex.lock();

	QString text;
	switch (type)
	{
	case QtDebugMsg:
		text = QString("Debug : ");
		break;

	case QtWarningMsg:
		text = QString("Warning :");
		break;

	case QtCriticalMsg:
		text = QString("Critical : ");
		break;

	case QtFatalMsg:
		text = QString("Fatal ");
	}

	QString context_info = QString("File:(%1) Line :(%2)").arg(QString(context.file)).arg(context.line);
	QString current_date_time = QDateTime::currentDateTime().toString("yyyy - MM - dd hh : mm:ss ddd");
	QString current_date = QString("(%1)").arg(current_date_time);
	QString message = QString("%1%2%3%4").arg(text).arg(context_info).arg(msg).arg(current_date);

	QFile file("Resources\\log.txt");
	file.open(QIODevice::WriteOnly | QIODevice::Append);
	QTextStream text_stream(&file);
	text_stream << message << "\r\n";
	file.flush();
	file.close();

	mutex.unlock();
}
SerialPortSoftWare::SerialPortSoftWare(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//注册MessageHandler
	qInstallMessageHandler(outputMessage);

	//打印日志到文件中
	initfrom();
	initSetting();
	initPort();
}
void SerialPortSoftWare::initfrom()
{
	

	setWindowIcon(QIcon(":myapp.ico"));
	setWindowTitle("ControlCenter");
	SerialPortSoftWare::setStyle("style.css");
	
	ui.upBtn->setIcon(QIcon("Resources\\up.ico"));
	ui.upBtn->setIconSize(QSize(64, 64));
	ui.downBtn->setIcon(QIcon("Resources\\down.ico"));
	ui.downBtn->setIconSize(QSize(64, 64));
	ui.leftBtn->setIcon(QIcon("Resources\\left.ico"));
	ui.leftBtn->setIconSize(QSize(64, 64));
	ui.rightBtn->setIcon(QIcon("Resources\\right.ico"));
	ui.rightBtn->setIconSize(QSize(64, 64));
	ui.stopBtn->setIcon(QIcon("Resources\\stop.ico"));
	ui.stopBtn->setIconSize(QSize(64, 64));
	commanddialog = new commandDialog();
	
}
void SerialPortSoftWare::initSetting()
{

	connect(ui.upBtn, SIGNAL(clicked()), this, SLOT(upward()));
	connect(ui.downBtn, SIGNAL(clicked()), this, SLOT(downward()));
	connect(ui.leftBtn, SIGNAL(clicked()), this, SLOT(rightward()));
	connect(ui.rightBtn, SIGNAL(clicked()), this, SLOT(leftward()));
	connect(ui.stopBtn, SIGNAL(clicked()), this, SLOT(stopward()));
	connect(ui.rsetBtn, SIGNAL(clicked()), this, SLOT(rset()));
	connect(ui.serial_action, SIGNAL(triggered()), this, SLOT(on_openBtn_clicked()));
	connect(ui.setting_action, SIGNAL(triggered()), this, SLOT(creatCommandDialog()));
	connect(ui.camera_action, SIGNAL(triggered()), this, SLOT(creatUdpCamera()));
	connect(commanddialog, SIGNAL(getCommandSignal()), this, SLOT(upDateCmdStatus()));
	connect(ui.OpenBtn, SIGNAL(clicked()), this, SLOT(on_openBtn_clicked()));
	configIni = new QSettings("CommandSetting.ini", QSettings::IniFormat);
	readCommandSetting();
	//qInstallMessageHandler(myMessageOutput);

	
}
void  SerialPortSoftWare::openSerialport()
{

}
void SerialPortSoftWare::upward()
{
	qDebug("This is a debug message");
	if (serial_Status == 0)
	{
		return;
	}
	QByteArray upAry= upCmd.toLatin1();
		
	wirteinfomation(upAry.data());
	ui.sendEdit->append(upAry);


}
void SerialPortSoftWare::downward()
{
	if (serial_Status == 0)
	{
		return;
	}
	QByteArray downAry = downCmd.toLatin1();

	wirteinfomation(downAry.data());
	ui.sendEdit->append(downAry);

}
void SerialPortSoftWare::leftward()
{
	if (serial_Status == 0)
	{
		return;
	}
	QByteArray leftAry = leftCmd.toLatin1();

	wirteinfomation(leftAry.data());
	ui.sendEdit->append(leftAry);

}
void SerialPortSoftWare::rightward()
{
	if (serial_Status == 0)
	{
		return;
	}
	QByteArray rightAry = rightCmd.toLatin1();

	wirteinfomation(rightAry.data());
	ui.sendEdit->append(rightAry);
	qDebug() <<rightAry<< endl;

}
void SerialPortSoftWare::stopward()
{

	if (serial_Status == 0)
	{
		return;
	}

	QByteArray stopAry = stopCmd.toLatin1();

	wirteinfomation(stopAry.data());
	ui.sendEdit->append(stopAry);
	

}
void SerialPortSoftWare::rset()
{
	
	
	if (serial_Status == 0)
	{
		return;
	}

	QByteArray rsetAry = rsetCmd.toLatin1();; //commanddialog->rsetCmd.toLatin1();

	wirteinfomation(rsetAry.data());
	ui.sendEdit->append(rsetAry);
}
void  SerialPortSoftWare::creatSerialProtDialog()
{
	
	
}
void  SerialPortSoftWare::creatCommandDialog()
{

	commanddialog->show();
}
void  SerialPortSoftWare::upDateCmdStatus()
{
	commad_Status = 1;

}
void  SerialPortSoftWare::upDateSerialStatus()
{
	serial_Status = 1;
	qDebug() << "open Serial" << endl;
}
void SerialPortSoftWare::showSerialInforToEdit()
{

}
void SerialPortSoftWare::showSendInforToSerialEdit()
{

}
void SerialPortSoftWare::creatUdpCamera()
{

	receiver = new QUdpSocket(this);
	port = 1200;
	QHostAddress localip = QHostAddress::Any;
	bool result = receiver->bind(port); //Binds to [address] on port [port]
	timergetimage = new QTimer(this);
	connect(timergetimage, SIGNAL(timeout()), this, SLOT(dataReceived()));
	timergetimage->start(100);
	if (result)
	{
		ui.netStatusLab->setText("Yes");
	}
	else
	{
		ui.netStatusLab->setText("No");
	}


}
void  SerialPortSoftWare::dataReceived()
{


	QByteArray datagram;
	datagram.resize(receiver->pendingDatagramSize());
	receiver->readDatagram(datagram.data(), datagram.size());
	QString msg = datagram;
	QBuffer buffer(&datagram);
	buffer.open(QIODevice::ReadOnly);
	//提供用Qbytearray读写内存中IO缓存区的接口，若无传参内部默认自动创建一个Qbytearray；
	//对IO缓存区读写操作等效于像IO设备读写数据
	//操作QBuffer像在操作文件（其实原理都差不多，各自都是内存中一块特殊区域嘛）
	QImageReader reader(&buffer, "JPG");
	//可读入磁盘文件、设备文件中的图像、以及其他图像数据如pixmap和image，相比较更加专业。
	//buffer属于设备文件一类，
	//专业地读取设备文件的图像数据。

	ui.imageStatusEdit->append(msg);
	QImage image = reader.read();

	if (msg.isEmpty())
	{

	}


	if (!image.isNull())
	{
		QPixmap pix = QPixmap::fromImage(image);
		ui.videoLab->setPixmap(pix.scaled(image.width(), image.height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
		ui.videoLab->setPixmap(QPixmap::fromImage(image));
		ui.videoLab->resize(image.width(), image.height());
	
		

	}
}
QByteArray SerialPortSoftWare::HexStringToByteArray(QString HexString)
{
	bool ok;
	QByteArray ret;
	HexString = HexString.trimmed();
	HexString = HexString.simplified();
	QStringList sl = HexString.split(" ");

	foreach(QString s, sl) {
		if (!s.isEmpty())
		{
			char c = s.toInt(&ok, 16) & 0xFF;
			if (ok) {
				ret.append(c);
			}
			else {
				qDebug() << "非法的16进制字符：" << s;
				QMessageBox::warning(0, tr("错误："), QString("非法的16进制字符: \"%1\"").arg(s));
			}
		}
	}
	qDebug() << ret;
	return ret;
}
void SerialPortSoftWare::initPort()
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
	ui.OpenBtn->setCheckable(true);

}
//设置控件的状态
void SerialPortSoftWare::setSelectable()
{
	ui.cmbBaudRate->setEnabled(true);
	ui.cmbDataBits->setEnabled(true);
	ui.cmbFlowControl->setEnabled(true);
	ui.cmbParity->setEnabled(true);
	ui.cmbPortName->setEnabled(true);
	ui.cmbStopBits->setEnabled(true);

	ui.OpenBtn->setText("打开串口");
}
void SerialPortSoftWare::setNonSelectable()
{
	ui.cmbBaudRate->setEnabled(false);
	ui.cmbDataBits->setEnabled(false);
	ui.cmbFlowControl->setEnabled(false);
	ui.cmbParity->setEnabled(false);
	ui.cmbPortName->setEnabled(false);
	ui.cmbStopBits->setEnabled(false);

	ui.OpenBtn->setText("关闭串口");
}
void SerialPortSoftWare::wirteinfomation(char *cmd)
{

	my_serialport->write(cmd);
	qDebug() <<"write:" <<cmd << endl;
}

void SerialPortSoftWare::on_openBtn_clicked()
{
	if (ui.OpenBtn->text() == "打开串口")
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
			timerSerial = new QTimer(this);
			connect(timerSerial, SIGNAL(timeout()), this, SLOT(readComDataSlot()));


			timerSerial->start(1000);

			setNonSelectable();
			upDateSerialStatus();
		}
		else
		{
			QMessageBox::about(NULL, "提示", "串口没有打开！");
			return;
		}
	}
	else
	{
		timerSerial->stop();
		setSelectable();
		my_serialport->close();
	}

}
//读取串口数据
void SerialPortSoftWare::readComDataSlot()
{
	//读取串口数据
	QByteArray readComData = my_serialport->readAll();
	QString informationQString;
	//将读到的数据显示到数据接收区的te中
	if (readComData != "")
	{
		ProcessingString(informationQString);//处理读到数据并显示
		ui.receiveEdit->append(readComData);
		qDebug() << "receive:"<<readComData << endl;
	}

	//清除缓冲区
	readComData.clear();



}
//处理接收区字符串函数
void SerialPortSoftWare::ProcessingString(QString informationQString)
{

	ui.tempNumLab->setText("25");
	ui.tempStatusLab->setText("适宜");
	ui.humNumLab->setText("75");
	ui.humStatusLab->setText("干燥");
	ui.combusNumLab->setText("86");
	ui.combusTatausLab->setText("正常");
	ui.oxyNumLab->setText("96");
	ui.oxyStatusLab->setText("正常");
	ui.pmNumLab->setText("12");
	ui.pmStatusLab->setText("较差");

	

}
void SerialPortSoftWare::readCommandSetting()
{

	upCmd = configIni->value("/cmd/up").toString();
	downCmd = configIni->value("/cmd/down").toString();
	leftCmd= configIni->value("/cmd/left").toString();
	rightCmd = configIni->value("/cmd/right").toString();
	stopCmd = configIni->value("/cmd/stop").toString();
	rsetCmd = configIni->value("/cmd/rset").toString();
}