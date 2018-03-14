/********************************************************************************
** Form generated from reading UI file 'interactiveinput.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERACTIVEINPUT_H
#define UI_INTERACTIVEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_InteractiveInput
{
public:
    QLabel *label;

    void setupUi(QDialog *InteractiveInput)
    {
        if (InteractiveInput->objectName().isEmpty())
            InteractiveInput->setObjectName(QStringLiteral("InteractiveInput"));
        InteractiveInput->resize(592, 450);
        label = new QLabel(InteractiveInput);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 321, 201));

        retranslateUi(InteractiveInput);

        QMetaObject::connectSlotsByName(InteractiveInput);
    } // setupUi

    void retranslateUi(QDialog *InteractiveInput)
    {
        InteractiveInput->setWindowTitle(QApplication::translate("InteractiveInput", "Dialog", nullptr));
        label->setText(QApplication::translate("InteractiveInput", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InteractiveInput: public Ui_InteractiveInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERACTIVEINPUT_H
