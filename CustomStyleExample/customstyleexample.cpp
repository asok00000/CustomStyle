#include "customstyleexample.h"
#include <QComboBox>
#include <QStyledItemDelegate>
#include <QTableView>
#include <QDebug>
CustomStyleExample::CustomStyleExample(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QList<QComboBox *> allComboBox = findChildren<QComboBox*>();
	Q_FOREACH(QComboBox*_c, allComboBox)
	{
		_c->setItemDelegate(new QStyledItemDelegate());
	}
}
