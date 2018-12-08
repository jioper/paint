/********************************************************************************
** Form generated from reading UI file 'Wiget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIGET_H
#define UI_WIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WigetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WigetClass)
    {
        if (WigetClass->objectName().isEmpty())
            WigetClass->setObjectName(QStringLiteral("WigetClass"));
        WigetClass->resize(600, 400);
        menuBar = new QMenuBar(WigetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WigetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WigetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WigetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WigetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WigetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WigetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WigetClass->setStatusBar(statusBar);

        retranslateUi(WigetClass);

        QMetaObject::connectSlotsByName(WigetClass);
    } // setupUi

    void retranslateUi(QMainWindow *WigetClass)
    {
        WigetClass->setWindowTitle(QApplication::translate("WigetClass", "Wiget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WigetClass: public Ui_WigetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIGET_H
