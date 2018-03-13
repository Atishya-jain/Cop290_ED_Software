/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *isometric;
    QTextEdit *coordx;
    QTextEdit *coordy;
    QTextEdit *coordz;
    QLabel *planeProj;
    QTextEdit *Ax;
    QTextEdit *By;
    QTextEdit *Cz;
    QTextEdit *Dd;
    QLabel *orthographic;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2217, 790);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 410, 86, 31));
        isometric = new QLabel(centralWidget);
        isometric->setObjectName(QStringLiteral("isometric"));
        isometric->setGeometry(QRect(770, 40, 491, 351));
        coordx = new QTextEdit(centralWidget);
        coordx->setObjectName(QStringLiteral("coordx"));
        coordx->setGeometry(QRect(780, 420, 41, 31));
        coordy = new QTextEdit(centralWidget);
        coordy->setObjectName(QStringLiteral("coordy"));
        coordy->setGeometry(QRect(840, 420, 41, 31));
        coordz = new QTextEdit(centralWidget);
        coordz->setObjectName(QStringLiteral("coordz"));
        coordz->setGeometry(QRect(900, 420, 41, 31));
        planeProj = new QLabel(centralWidget);
        planeProj->setObjectName(QStringLiteral("planeProj"));
        planeProj->setGeometry(QRect(40, 30, 561, 361));
        Ax = new QTextEdit(centralWidget);
        Ax->setObjectName(QStringLiteral("Ax"));
        Ax->setGeometry(QRect(30, 400, 41, 31));
        By = new QTextEdit(centralWidget);
        By->setObjectName(QStringLiteral("By"));
        By->setGeometry(QRect(100, 400, 41, 31));
        Cz = new QTextEdit(centralWidget);
        Cz->setObjectName(QStringLiteral("Cz"));
        Cz->setGeometry(QRect(160, 400, 41, 31));
        Dd = new QTextEdit(centralWidget);
        Dd->setObjectName(QStringLiteral("Dd"));
        Dd->setGeometry(QRect(220, 400, 41, 31));
        orthographic = new QLabel(centralWidget);
        orthographic->setObjectName(QStringLiteral("orthographic"));
        orthographic->setGeometry(QRect(1320, 0, 781, 681));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 2217, 33));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        isometric->setText(QApplication::translate("MainWindow", "isometric", nullptr));
        planeProj->setText(QApplication::translate("MainWindow", "plane projection", nullptr));
        orthographic->setText(QApplication::translate("MainWindow", "orthographic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
