#ifndef WIGET_H
#define WIGET_H

#include <QtWidgets/QMainWindow>
#include "ui_Wiget.h"
#include<vector> 
using namespace std;
typedef struct myLine {
	QPoint startPt;
	QPoint endPt;
}myLine;

class Wiget : public QWidget
{
	Q_OBJECT

public:
	Wiget(QWidget *parent = Q_NULLPTR);
	~Wiget();
	Ui::WigetClass ui;
	QPoint startPt, endPt;
	bool isPressed;
	vector<myLine*> lines;
	void paintEvent(QPaintEvent *e);
	void mousePressEvent(QMouseEvent *e);
	void mouseMoveEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);
};
#endif