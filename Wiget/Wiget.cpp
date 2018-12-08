#include "Wiget.h"
#include <QString>  
#include <QMessageBox>  
#include <QPainter>  
#include <QPen>  
#include <QMouseEvent>  

Wiget::Wiget(QWidget* parent) : QWidget(parent)
{
	setMinimumSize(240, 120);
	setMaximumSize(480, 240);
	this->setMouseTracking(true);
	this->isPressed = false;
}

Wiget::~Wiget() {}

void Wiget::paintEvent(QPaintEvent* p)
{
	QPainter painter(this);
	QPen pen;                                 //创建一个画笔  
	pen.setColor(Qt::darkCyan);
	pen.setWidth(5);
	painter.setPen(pen);

	for (int i = 0; i < lines.size(); i++)
	{
		myLine* pLine = lines[i];
		painter.drawLine(pLine->startPt, pLine->endPt);
	}
}

void Wiget::mousePressEvent(QMouseEvent *e)
{
	setCursor(Qt::PointingHandCursor);
	startPt = e->pos();
	endPt = e->pos();
	this->isPressed = true;
	//QString msg ="("+QString::number(e->x())+","+QString::number(e->y())+")";  
	//QMessageBox::warning(this,tr("Warning"),msg,QMessageBox::Ok);  
}

void Wiget::mouseMoveEvent(QMouseEvent *e)
{
	if (this->isPressed)
	{
		endPt = e->pos();

		myLine* line = new myLine;  //put the new line into vector  
		line->startPt = startPt;
		line->endPt = endPt;
		this->lines.push_back(line);

		update();                   //repainter，call paintEvent  
		startPt = endPt;
	}
}

void Wiget::mouseReleaseEvent(QMouseEvent *e)
{
	setCursor(Qt::ArrowCursor);
	this->isPressed = false;
}