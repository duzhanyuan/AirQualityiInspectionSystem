#pragma once
#pragma execution_character_set("utf-8")
#include <QFile>
#include <QtWidgets/QMainWindow>
#include "ui_SerialPortSoftWare.h"
#include "commandDialog.h"
#include <QMessageBox>
#include <QUdpSocket>
#include <QTimer>
#include <opencv2/opencv.hpp>
#include <QDebug>
#include<QTime>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include<QHostAddress>
#include<QPixmap>
#include<QImageReader>
#include<QBuffer>
#include<QDebug>
#include <QMutex>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
using namespace cv;
class SerialPortSoftWare : public QMainWindow
{
	Q_OBJECT

public:

	SerialPortSoftWare(QWidget *parent = Q_NULLPTR);
	static void setStyle(const QString &style)
	{
		QFile qss(style);
		qss.open(QFile::ReadOnly);
		qApp->setStyleSheet(qss.readAll());
		qss.close();
	}
	

	commandDialog *commanddialog;
	
	QTimer *timergetimage;
	QUdpSocket *receiver;
	void initfrom();
	void initSetting();
	QByteArray HexStringToByteArray(QString HexString);
	int port;
	Mat mat;
	//初始化串口信息
	void initPort();
	//设置控件的状态
	void setSelectable();
	void setNonSelectable();
	void wirteinfomation(char *cmd);

	QSerialPort * my_serialport;
	QTimer *timerSerial;
	QSettings *configIni;
	void readCommandSetting();
	QString upCmd;
	QString downCmd;
	QString leftCmd;
	QString rightCmd;
	QString stopCmd;
	QString rsetCmd;
	void ProcessingString(QString informationQString);
private slots:
	void upward();
	void downward();
	void leftward();
	void rightward();
	void rset();
	void stopward();
	void openSerialport();
	void creatSerialProtDialog();
	void creatCommandDialog();
	void upDateCmdStatus();
	void upDateSerialStatus();
	void showSerialInforToEdit();
	void showSendInforToSerialEdit();
	void dataReceived();
	void creatUdpCamera();
	void on_openBtn_clicked();
	//读取串口数据
	void readComDataSlot();

private:
	Ui::SerialPortSoftWareClass ui;
	int commad_Status = 0;
	int serial_Status = 0;;
};
