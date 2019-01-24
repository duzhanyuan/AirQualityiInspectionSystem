#pragma once

#include <QWidget>
#include "ui_commandDialog.h"
#include <QSettings>
class commandDialog : public QWidget
{
	Q_OBJECT

public:
	commandDialog(QWidget *parent = Q_NULLPTR);
	~commandDialog();
	QString upCmd;
	QString downCmd;
	QString leftCmd;
	QString rightCmd;
	QString stopCmd;
	QString rsetCmd;
	void initsetting();
	QSettings *configIni;
private slots:
	void getCommand();
	void SaveCommandSetting();
	void readCommandSetting();
	void getCommandSetting();

signals:
	void getCommandSignal();



private:
	Ui::commandDialog ui;

};
