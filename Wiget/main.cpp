#include "Wiget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Wiget w;
	w.show();
	return a.exec();
}
