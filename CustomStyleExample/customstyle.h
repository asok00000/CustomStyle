#pragma once

#include <QProxyStyle>
#include <QStyleOption>
#include <QPainter>
class CustomStyle : public QProxyStyle
{
	Q_OBJECT

public:
	CustomStyle();
	~CustomStyle() {}

	void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
		QPainter *painter, const QWidget *widget) const;
};
