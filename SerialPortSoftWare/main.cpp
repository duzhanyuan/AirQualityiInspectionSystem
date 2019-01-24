#include "SerialPortSoftWare.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SerialPortSoftWare w;
	w.show();
	return a.exec();
}
