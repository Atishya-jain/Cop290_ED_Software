/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buttonPlane;
    QLabel *isometric;
    QLabel *planeProj;
    QTextEdit *Ax;
    QTextEdit *By;
    QTextEdit *Cz;
    QTextEdit *Dd;
    QLabel *orthographic;
    QPushButton *buttonUP;
    QPushButton *buttonDOWN;
    QPushButton *buttonLEFT;
    QPushButton *buttonRIGHT;
    QPushButton *buttonZplus;
    QPushButton *buttonZminus;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2504, 1154);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonPlane = new QPushButton(centralWidget);
        buttonPlane->setObjectName(QString::fromUtf8("buttonPlane"));
        buttonPlane->setGeometry(QRect(320, 440, 121, 31));
        isometric = new QLabel(centralWidget);
        isometric->setObjectName(QString::fromUtf8("isometric"));
        isometric->setGeometry(QRect(460, 80, 491, 351));
        planeProj = new QLabel(centralWidget);
        planeProj->setObjectName(QString::fromUtf8("planeProj"));
        planeProj->setGeometry(QRect(40, 30, 321, 361));
        Ax = new QTextEdit(centralWidget);
        Ax->setObjectName(QString::fromUtf8("Ax"));
        Ax->setGeometry(QRect(30, 440, 41, 31));
        Ax->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        By = new QTextEdit(centralWidget);
        By->setObjectName(QString::fromUtf8("By"));
        By->setGeometry(QRect(100, 440, 41, 31));
        By->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Cz = new QTextEdit(centralWidget);
        Cz->setObjectName(QString::fromUtf8("Cz"));
        Cz->setGeometry(QRect(160, 440, 41, 31));
        Cz->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Dd = new QTextEdit(centralWidget);
        Dd->setObjectName(QString::fromUtf8("Dd"));
        Dd->setGeometry(QRect(220, 440, 41, 31));
        Dd->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        orthographic = new QLabel(centralWidget);
        orthographic->setObjectName(QString::fromUtf8("orthographic"));
        orthographic->setGeometry(QRect(1010, 70, 661, 631));
        buttonUP = new QPushButton(centralWidget);
        buttonUP->setObjectName(QString::fromUtf8("buttonUP"));
        buttonUP->setGeometry(QRect(1090, 20, 41, 41));
        buttonDOWN = new QPushButton(centralWidget);
        buttonDOWN->setObjectName(QString::fromUtf8("buttonDOWN"));
        buttonDOWN->setGeometry(QRect(1070, 720, 41, 41));
        buttonLEFT = new QPushButton(centralWidget);
        buttonLEFT->setObjectName(QString::fromUtf8("buttonLEFT"));
        buttonLEFT->setGeometry(QRect(405, 235, 41, 41));
        buttonRIGHT = new QPushButton(centralWidget);
        buttonRIGHT->setObjectName(QString::fromUtf8("buttonRIGHT"));
        buttonRIGHT->setGeometry(QRect(1700, 290, 41, 41));
        buttonZplus = new QPushButton(centralWidget);
        buttonZplus->setObjectName(QString::fromUtf8("buttonZplus"));
        buttonZplus->setGeometry(QRect(1235, 30, 41, 36));
        buttonZminus = new QPushButton(centralWidget);
        buttonZminus->setObjectName(QString::fromUtf8("buttonZminus"));
        buttonZminus->setGeometry(QRect(1280, 30, 41, 36));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 400, 331, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 2504, 33));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        buttonPlane->setText(QApplication::translate("MainWindow", "Get Projection", 0));
        isometric->setText(QString());
        planeProj->setText(QString());
        Ax->setPlaceholderText(QApplication::translate("MainWindow", "  A", 0));
        By->setPlaceholderText(QApplication::translate("MainWindow", "  B", 0));
        Cz->setPlaceholderText(QApplication::translate("MainWindow", "  C", 0));
        Dd->setPlaceholderText(QApplication::translate("MainWindow", "  D", 0));
        orthographic->setText(QString());
        buttonUP->setText(QApplication::translate("MainWindow", "up", 0));
        buttonDOWN->setText(QApplication::translate("MainWindow", "down", 0));
        buttonLEFT->setText(QApplication::translate("MainWindow", "left", 0));
        buttonRIGHT->setText(QApplication::translate("MainWindow", "right", 0));
        buttonZplus->setText(QApplication::translate("MainWindow", "Z+", 0));
        buttonZminus->setText(QApplication::translate("MainWindow", "Z-", 0));
        label->setText(QApplication::translate("MainWindow", "Get projection along any plane: Ax+By+Cz=D", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
