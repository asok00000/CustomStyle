#include "customstyleexample.h"
#include <QtWidgets/QApplication>
#include "customstyle.h"
int main(int argc, char *argv[])
{
	QApplication::setStyle(new CustomStyle());
	QApplication a(argc, argv);
	CustomStyleExample w;
	w.show();
	return a.exec();
}
