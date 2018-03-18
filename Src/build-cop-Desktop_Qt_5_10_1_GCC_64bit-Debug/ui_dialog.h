/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *filename;
    QPushButton *pushButton;
    QPushButton *browse;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rad3_3d;
    QRadioButton *rad4_2d;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rad1_file;
    QRadioButton *rad2_inter;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(779, 504);
        filename = new QTextEdit(Dialog);
        filename->setObjectName(QStringLiteral("filename"));
        filename->setEnabled(true);
        filename->setGeometry(QRect(220, 190, 431, 101));
        filename->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        filename->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 380, 86, 36));
        browse = new QPushButton(Dialog);
        browse->setObjectName(QStringLiteral("browse"));
        browse->setEnabled(true);
        browse->setGeometry(QRect(660, 190, 86, 36));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 330, 224, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rad3_3d = new QRadioButton(layoutWidget);
        rad3_3d->setObjectName(QStringLiteral("rad3_3d"));

        horizontalLayout_2->addWidget(rad3_3d);

        rad4_2d = new QRadioButton(layoutWidget);
        rad4_2d->setObjectName(QStringLiteral("rad4_2d"));

        horizontalLayout_2->addWidget(rad4_2d);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 190, 111, 61));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 320, 161, 51));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 60, 66, 28));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 140, 360, 38));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rad1_file = new QRadioButton(widget);
        rad1_file->setObjectName(QStringLiteral("rad1_file"));

        horizontalLayout->addWidget(rad1_file);

        rad2_inter = new QRadioButton(widget);
        rad2_inter->setObjectName(QStringLiteral("rad2_inter"));

        horizontalLayout->addWidget(rad2_inter);


        horizontalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "OK", nullptr));
        browse->setText(QApplication::translate("Dialog", "Browse", nullptr));
        rad3_3d->setText(QApplication::translate("Dialog", "3d", nullptr));
        rad4_2d->setText(QApplication::translate("Dialog", "2d", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Select the file:", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Is this file 3d or 2d?", nullptr));
        label_4->setText(QApplication::translate("Dialog", "File Input", nullptr));
        label->setText(QApplication::translate("Dialog", "Select file or interactive input: ", nullptr));
        rad1_file->setText(QApplication::translate("Dialog", "file", nullptr));
        rad2_inter->setText(QApplication::translate("Dialog", "interactive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
