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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *yesButton;
    QPushButton *noButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(600, 400);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 110, 201, 61));
        yesButton = new QPushButton(Widget);
        yesButton->setObjectName("yesButton");
        yesButton->setGeometry(QRect(90, 230, 120, 50));
        yesButton->setStyleSheet(QString::fromUtf8("font: 18pt \"Microsoft YaHei UI\";"));
        noButton = new QPushButton(Widget);
        noButton->setObjectName("noButton");
        noButton->setGeometry(QRect(370, 230, 120, 50));
        noButton->setStyleSheet(QString::fromUtf8("font: 18pt \"Microsoft YaHei UI\";"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\201\232\346\210\221\345\245\263\346\234\213\345\217\213\344\274\232\344\270\215\344\274\232\345\221\200\357\274\201</span></p></body></html>", nullptr));
        yesButton->setText(QCoreApplication::translate("Widget", "Yes", nullptr));
        noButton->setText(QCoreApplication::translate("Widget", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
