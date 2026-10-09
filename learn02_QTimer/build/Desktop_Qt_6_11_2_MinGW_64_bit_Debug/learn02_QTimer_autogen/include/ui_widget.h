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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpinBox *timesBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(486, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 300, 420));
        label->setScaledContents(true);
        startButton = new QPushButton(Widget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(90, 470, 90, 60));
        stopButton = new QPushButton(Widget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(300, 470, 90, 60));
        timesBox = new QSpinBox(Widget);
        timesBox->setObjectName("timesBox");
        timesBox->setGeometry(QRect(200, 500, 41, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        startButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        stopButton->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
