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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *IdLabel;
    QLineEdit *IdlineEdit;
    QLabel *NameLabel;
    QLineEdit *NamelineEdit;
    QLabel *BirthLabel;
    QLineEdit *BirthlineEdit;
    QPushButton *findPushButton;
    QPushButton *insertPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(400, 301);
        IdLabel = new QLabel(Widget);
        IdLabel->setObjectName("IdLabel");
        IdLabel->setGeometry(QRect(60, 60, 51, 31));
        IdlineEdit = new QLineEdit(Widget);
        IdlineEdit->setObjectName("IdlineEdit");
        IdlineEdit->setGeometry(QRect(120, 60, 181, 31));
        NameLabel = new QLabel(Widget);
        NameLabel->setObjectName("NameLabel");
        NameLabel->setGeometry(QRect(60, 100, 51, 31));
        NamelineEdit = new QLineEdit(Widget);
        NamelineEdit->setObjectName("NamelineEdit");
        NamelineEdit->setGeometry(QRect(120, 100, 181, 31));
        BirthLabel = new QLabel(Widget);
        BirthLabel->setObjectName("BirthLabel");
        BirthLabel->setGeometry(QRect(60, 140, 51, 31));
        BirthlineEdit = new QLineEdit(Widget);
        BirthlineEdit->setObjectName("BirthlineEdit");
        BirthlineEdit->setGeometry(QRect(120, 140, 181, 31));
        findPushButton = new QPushButton(Widget);
        findPushButton->setObjectName("findPushButton");
        findPushButton->setGeometry(QRect(70, 210, 75, 24));
        insertPushButton = new QPushButton(Widget);
        insertPushButton->setObjectName("insertPushButton");
        insertPushButton->setGeometry(QRect(230, 210, 75, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        IdLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\255\246\345\217\267</span></p></body></html>", nullptr));
        NameLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        BirthLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\224\237\346\227\245</span></p></body></html>", nullptr));
        findPushButton->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        insertPushButton->setText(QCoreApplication::translate("Widget", "\346\217\222\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
