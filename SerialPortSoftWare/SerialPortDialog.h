#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_SerialPortDialog.h"

#include <QTimer>
#include<QTime>
#include <QMessageBox>
#include <iostream>
using namespace std;
class SerialPortDialog : public QWidget
{
	Q_OBJECT

public:
	SerialPortDialog(QWidget *parent = Q_NULLPTR);
	~SerialPortDialog();
	QSerialPort * my_serialport;
	QTimer *timer;

	//��ʼ��������Ϣ
	void initPort();
	//���ÿؼ���״̬
	void setSelectable();
	void setNonSelectable();
	void wirteinfomation(char* cmd);
	QString readSerialInfomation();
	QString Cmd;
private slots:
	void on_openBtn_clicked();
	//��ȡ��������
	void readComDataSlot();
signals:
	void readingSerialSignal();
	void getSerialInformationSignal();
	
	

private:
	Ui::SerialPortDialog ui;
};
