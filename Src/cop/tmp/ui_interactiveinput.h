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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InteractiveInput
{
public:
    QLabel *label;
    QTextEdit *p1x;
    QTextEdit *p1y;
    QTextEdit *p1z;
    QTextEdit *p1label;
    QTextEdit *p2label;
    QTextEdit *p2x;
    QTextEdit *p2y;
    QTextEdit *p2z;
    QPushButton *draw;
    QPushButton *erase;
    QPushButton *Done;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *InteractiveInput)
    {
        if (InteractiveInput->objectName().isEmpty())
            InteractiveInput->setObjectName(QStringLiteral("InteractiveInput"));
        InteractiveInput->resize(788, 699);
        label = new QLabel(InteractiveInput);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 561, 451));
        p1x = new QTextEdit(InteractiveInput);
        p1x->setObjectName(QStringLiteral("p1x"));
        p1x->setGeometry(QRect(60, 530, 41, 41));
        p1y = new QTextEdit(InteractiveInput);
        p1y->setObjectName(QStringLiteral("p1y"));
        p1y->setGeometry(QRect(120, 530, 41, 41));
        p1z = new QTextEdit(InteractiveInput);
        p1z->setObjectName(QStringLiteral("p1z"));
        p1z->setGeometry(QRect(180, 530, 41, 41));
        p1label = new QTextEdit(InteractiveInput);
        p1label->setObjectName(QStringLiteral("p1label"));
        p1label->setGeometry(QRect(60, 580, 161, 41));
        p2label = new QTextEdit(InteractiveInput);
        p2label->setObjectName(QStringLiteral("p2label"));
        p2label->setGeometry(QRect(300, 580, 161, 41));
        p2x = new QTextEdit(InteractiveInput);
        p2x->setObjectName(QStringLiteral("p2x"));
        p2x->setGeometry(QRect(300, 530, 41, 41));
        p2y = new QTextEdit(InteractiveInput);
        p2y->setObjectName(QStringLiteral("p2y"));
        p2y->setGeometry(QRect(360, 530, 41, 41));
        p2z = new QTextEdit(InteractiveInput);
        p2z->setObjectName(QStringLiteral("p2z"));
        p2z->setGeometry(QRect(420, 530, 41, 41));
        draw = new QPushButton(InteractiveInput);
        draw->setObjectName(QStringLiteral("draw"));
        draw->setGeometry(QRect(520, 530, 86, 36));
        erase = new QPushButton(InteractiveInput);
        erase->setObjectName(QStringLiteral("erase"));
        erase->setGeometry(QRect(520, 580, 86, 36));
        Done = new QPushButton(InteractiveInput);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setGeometry(QRect(640, 630, 86, 36));
        Done->setCursor(QCursor(Qt::ArrowCursor));
        label_2 = new QLabel(InteractiveInput);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 490, 66, 28));
        label_3 = new QLabel(InteractiveInput);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 490, 66, 28));

        retranslateUi(InteractiveInput);

        QMetaObject::connectSlotsByName(InteractiveInput);
    } // setupUi

    void retranslateUi(QDialog *InteractiveInput)
    {
        InteractiveInput->setWindowTitle(QApplication::translate("InteractiveInput", "Dialog", nullptr));
        label->setText(QString());
        p1x->setPlaceholderText(QApplication::translate("InteractiveInput", "  x", nullptr));
        p1y->setPlaceholderText(QApplication::translate("InteractiveInput", "  y", nullptr));
        p1z->setPlaceholderText(QApplication::translate("InteractiveInput", "  z", nullptr));
        p1label->setPlaceholderText(QApplication::translate("InteractiveInput", "    label for point 1", nullptr));
        p2label->setPlaceholderText(QApplication::translate("InteractiveInput", "    label for point 2", nullptr));
        p2x->setPlaceholderText(QApplication::translate("InteractiveInput", "  x", nullptr));
        p2y->setPlaceholderText(QApplication::translate("InteractiveInput", "  y", nullptr));
        p2z->setPlaceholderText(QApplication::translate("InteractiveInput", "  z", nullptr));
        draw->setText(QApplication::translate("InteractiveInput", "draw", nullptr));
        erase->setText(QApplication::translate("InteractiveInput", "erase", nullptr));
        Done->setText(QApplication::translate("InteractiveInput", "Done", nullptr));
        label_2->setText(QApplication::translate("InteractiveInput", "Point 1", nullptr));
        label_3->setText(QApplication::translate("InteractiveInput", "Point 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InteractiveInput: public Ui_InteractiveInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERACTIVEINPUT_H
