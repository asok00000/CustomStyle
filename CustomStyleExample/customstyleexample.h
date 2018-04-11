#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_customstyleexample.h"

class CustomStyleExample : public QMainWindow
{
	Q_OBJECT

public:
	CustomStyleExample(QWidget *parent = Q_NULLPTR);

private:
	Ui::CustomStyleExampleClass ui;
};
