#include "customstyleexample.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QStyleFactory>
#include <QDebug>
#include <QTextCodec>
#include "customstyle.h"
bool setSkin(QApplication* const app, QString const &skinFile)
{
	QFile file(skinFile);
	if (file.exists() && file.open(QIODevice::ReadOnly))
	{
		QApplication::setStyle(QStyleFactory::create("Windows"));
		QString strTemp;
		QTextStream in(&file);
		while (!in.atEnd())
		{
			strTemp.append(in.readLine());
		}
		file.close();
		app->setStyleSheet(strTemp);
	}
	else
	{
		qDebug() << "Qss file don't exist." << file.errorString();
	}

	return true;
}
int main(int argc, char *argv[])
{
	//QApplication::setStyle(new CustomStyle());
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	QApplication a(argc, argv);
	
	CustomStyleExample w;
	w.show();
	setSkin(&a, QApplication::applicationDirPath() + "/style.qss");
	return a.exec();
}
