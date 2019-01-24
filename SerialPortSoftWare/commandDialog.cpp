#include "commandDialog.h"

commandDialog::commandDialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	initsetting();
}

commandDialog::~commandDialog()
{
}
void commandDialog::initsetting()
{
	connect(ui.saveBtn, SIGNAL(clicked()), this, SLOT(getCommandSetting()));
	configIni = new QSettings("CommandSetting.ini", QSettings::IniFormat);
	readCommandSetting();

}
void commandDialog::getCommand()
{
	
}


//获取数据库设置界面上的所有数据
void commandDialog::getCommandSetting()
{

	upCmd = ui.upEdit->text();
	downCmd = ui.downEdit->text();
	leftCmd = ui.leftEdit->text();
	rightCmd = ui.rightEdit->text();
	stopCmd = ui.stopEdit->text();
	rsetCmd = ui.rsetEdit->text();
	SaveCommandSetting();
	emit getCommandSignal();



}

void commandDialog::SaveCommandSetting()
{

	//向ini文件的第一个节写入内容,ip节下的第一个参数   
	configIni->setValue("/cmd/up", upCmd);
	configIni->setValue("/cmd/down", downCmd);
	configIni->setValue("/cmd/left", leftCmd);
	configIni->setValue("/cmd/right", rightCmd);
	configIni->setValue("/cmd/stop", stopCmd);
	configIni->setValue("/cmd/rset", rsetCmd);
	//写入完成后删除指针   
	delete configIni;


}
void commandDialog::readCommandSetting()
{
	QString cmd_up = configIni->value("/cmd/up").toString();
	QString cmd_down = configIni->value("/cmd/down").toString();
	QString cmd_left = configIni->value("/cmd/left").toString();
	QString cmd_right = configIni->value("/cmd/right").toString();
	QString cmd_stop = configIni->value("/cmd/stop").toString();
	QString cmd_rset = configIni->value("/cmd/rset").toString();
	ui.upEdit->setText(cmd_up);
	ui.downEdit->setText(cmd_down);
	ui.leftEdit->setText(cmd_left);
	ui.rightEdit->setText(cmd_right);
	ui.stopEdit->setText(cmd_stop);
	ui.rsetEdit->setText(cmd_rset);
	

	

}