/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QDial *dial;
    QGroupBox *groupBox;
    QRadioButton *BinaryRadioButton;
    QRadioButton *DecimalRadioButton;
    QRadioButton *OctalRadioButton;
    QRadioButton *HexadecimalRadioButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(850, 298);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(310, 60, 321, 181));
        dial = new QDial(Widget);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(50, 60, 231, 181));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(660, 50, 151, 191));
        BinaryRadioButton = new QRadioButton(groupBox);
        BinaryRadioButton->setObjectName("BinaryRadioButton");
        BinaryRadioButton->setGeometry(QRect(30, 20, 111, 31));
        BinaryRadioButton->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        DecimalRadioButton = new QRadioButton(groupBox);
        DecimalRadioButton->setObjectName("DecimalRadioButton");
        DecimalRadioButton->setGeometry(QRect(30, 100, 111, 31));
        DecimalRadioButton->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        OctalRadioButton = new QRadioButton(groupBox);
        OctalRadioButton->setObjectName("OctalRadioButton");
        OctalRadioButton->setGeometry(QRect(30, 60, 111, 31));
        OctalRadioButton->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        HexadecimalRadioButton = new QRadioButton(groupBox);
        HexadecimalRadioButton->setObjectName("HexadecimalRadioButton");
        HexadecimalRadioButton->setGeometry(QRect(30, 140, 111, 31));
        HexadecimalRadioButton->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "LCD\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        BinaryRadioButton->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        DecimalRadioButton->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        OctalRadioButton->setText(QCoreApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", nullptr));
        HexadecimalRadioButton->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
