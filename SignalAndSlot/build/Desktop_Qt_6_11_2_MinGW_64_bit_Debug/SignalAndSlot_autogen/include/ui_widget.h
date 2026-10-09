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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *maxsizePushButton;
    QPushButton *normalPushButton;
    QPushButton *minsizePushButton;
    QPushButton *closePushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(639, 321);
        maxsizePushButton = new QPushButton(Widget);
        maxsizePushButton->setObjectName("maxsizePushButton");
        maxsizePushButton->setGeometry(QRect(30, 140, 101, 31));
        normalPushButton = new QPushButton(Widget);
        normalPushButton->setObjectName("normalPushButton");
        normalPushButton->setGeometry(QRect(180, 140, 101, 31));
        minsizePushButton = new QPushButton(Widget);
        minsizePushButton->setObjectName("minsizePushButton");
        minsizePushButton->setGeometry(QRect(320, 140, 101, 31));
        closePushButton = new QPushButton(Widget);
        closePushButton->setObjectName("closePushButton");
        closePushButton->setGeometry(QRect(460, 140, 101, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        maxsizePushButton->setText(QCoreApplication::translate("Widget", "\346\234\200\345\244\247\345\214\226\346\230\276\347\244\272", nullptr));
        normalPushButton->setText(QCoreApplication::translate("Widget", "\346\255\243\345\270\270\346\230\276\347\244\272", nullptr));
        minsizePushButton->setText(QCoreApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226\346\230\276\347\244\272", nullptr));
        closePushButton->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
