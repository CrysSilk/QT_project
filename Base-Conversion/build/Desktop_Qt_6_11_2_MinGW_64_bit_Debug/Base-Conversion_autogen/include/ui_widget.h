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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *BinaryLabel;
    QLabel *OctalLabel;
    QLabel *hexadecimalLabel;
    QLabel *DecimalLabel;
    QPlainTextEdit *BinaryEdit;
    QPlainTextEdit *OctalEdit;
    QPlainTextEdit *hexadecimalEdit;
    QPlainTextEdit *DecimalEdit;
    QPushButton *conversionButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(271, 223);
        BinaryLabel = new QLabel(Widget);
        BinaryLabel->setObjectName("BinaryLabel");
        BinaryLabel->setGeometry(QRect(10, 10, 61, 21));
        OctalLabel = new QLabel(Widget);
        OctalLabel->setObjectName("OctalLabel");
        OctalLabel->setGeometry(QRect(10, 50, 61, 21));
        hexadecimalLabel = new QLabel(Widget);
        hexadecimalLabel->setObjectName("hexadecimalLabel");
        hexadecimalLabel->setGeometry(QRect(10, 130, 81, 21));
        DecimalLabel = new QLabel(Widget);
        DecimalLabel->setObjectName("DecimalLabel");
        DecimalLabel->setGeometry(QRect(10, 90, 61, 21));
        BinaryEdit = new QPlainTextEdit(Widget);
        BinaryEdit->setObjectName("BinaryEdit");
        BinaryEdit->setGeometry(QRect(90, 10, 161, 31));
        OctalEdit = new QPlainTextEdit(Widget);
        OctalEdit->setObjectName("OctalEdit");
        OctalEdit->setGeometry(QRect(90, 50, 161, 31));
        hexadecimalEdit = new QPlainTextEdit(Widget);
        hexadecimalEdit->setObjectName("hexadecimalEdit");
        hexadecimalEdit->setGeometry(QRect(90, 130, 161, 31));
        DecimalEdit = new QPlainTextEdit(Widget);
        DecimalEdit->setObjectName("DecimalEdit");
        DecimalEdit->setGeometry(QRect(90, 90, 161, 31));
        conversionButton = new QPushButton(Widget);
        conversionButton->setObjectName("conversionButton");
        conversionButton->setGeometry(QRect(170, 170, 70, 30));
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(40, 170, 70, 30));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        BinaryLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\344\272\214\350\277\233\345\210\266</span></p></body></html>", nullptr));
        OctalLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\205\253\350\277\233\345\210\266</span></p></body></html>", nullptr));
        hexadecimalLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\215\201\345\205\255\350\277\233\345\210\266</span></p></body></html>", nullptr));
        DecimalLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\215\201\350\277\233\345\210\266</span></p></body></html>", nullptr));
        conversionButton->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
