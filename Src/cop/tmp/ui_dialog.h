/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QRadioButton>
#include <QTextEdit>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *filename;
    QPushButton *pushButton;
    QPushButton *browse;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rad1_file;
    QRadioButton *rad2_inter;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rad3_3d;
    QRadioButton *rad4_2d;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(753, 356);
        filename = new QTextEdit(Dialog);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setEnabled(false);
        filename->setGeometry(QRect(200, 80, 431, 101));
        filename->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        filename->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 270, 86, 36));
        browse = new QPushButton(Dialog);
        browse->setObjectName(QString::fromUtf8("browse"));
        browse->setEnabled(false);
        browse->setGeometry(QRect(640, 80, 86, 36));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 30, 224, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rad1_file = new QRadioButton(layoutWidget);
        rad1_file->setObjectName(QString::fromUtf8("rad1_file"));

        horizontalLayout->addWidget(rad1_file);

        rad2_inter = new QRadioButton(layoutWidget);
        rad2_inter->setObjectName(QString::fromUtf8("rad2_inter"));

        horizontalLayout->addWidget(rad2_inter);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(370, 220, 224, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rad3_3d = new QRadioButton(layoutWidget1);
        rad3_3d->setObjectName(QString::fromUtf8("rad3_3d"));

        horizontalLayout_2->addWidget(rad3_3d);

        rad4_2d = new QRadioButton(layoutWidget1);
        rad4_2d->setObjectName(QString::fromUtf8("rad4_2d"));

        horizontalLayout_2->addWidget(rad4_2d);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 221, 28));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 91, 28));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 220, 71, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("Dialog", "OK", 0));
        browse->setText(QApplication::translate("Dialog", "Browse", 0));
        rad1_file->setText(QApplication::translate("Dialog", "file", 0));
        rad2_inter->setText(QApplication::translate("Dialog", "interactive", 0));
        rad3_3d->setText(QApplication::translate("Dialog", "3d", 0));
        rad4_2d->setText(QApplication::translate("Dialog", "2d", 0));
        label->setText(QApplication::translate("Dialog", "File input or interactive input: ", 0));
        label_2->setText(QApplication::translate("Dialog", "Select file: ", 0));
        label_3->setText(QApplication::translate("Dialog", "3d or 2d: ", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
