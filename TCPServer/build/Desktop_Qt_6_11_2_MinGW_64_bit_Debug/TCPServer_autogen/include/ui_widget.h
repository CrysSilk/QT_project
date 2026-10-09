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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *clientPortLabel;
    QLabel *clientIPLabel;
    QPlainTextEdit *IPTextEdit;
    QPlainTextEdit *PortTextEdit;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 80, 71, 51));
        clientPortLabel = new QLabel(Widget);
        clientPortLabel->setObjectName("clientPortLabel");
        clientPortLabel->setGeometry(QRect(150, 280, 110, 30));
        clientIPLabel = new QLabel(Widget);
        clientIPLabel->setObjectName("clientIPLabel");
        clientIPLabel->setGeometry(QRect(150, 190, 110, 30));
        IPTextEdit = new QPlainTextEdit(Widget);
        IPTextEdit->setObjectName("IPTextEdit");
        IPTextEdit->setGeometry(QRect(270, 190, 280, 40));
        PortTextEdit = new QPlainTextEdit(Widget);
        PortTextEdit->setObjectName("PortTextEdit");
        PortTextEdit->setGeometry(QRect(270, 270, 280, 40));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(170, 380, 431, 71));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\234\215\345\212\241\345\231\250</span></p></body></html>", nullptr));
        clientPortLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243:</span></p></body></html>", nullptr));
        clientIPLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
