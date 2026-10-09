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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *datatimeBox;
    QTimeEdit *timeEdit;
    QLabel *timeTabel;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QLabel *datatimeLabel;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton;
    QPlainTextEdit *timePlainTextEdit;
    QPlainTextEdit *datePlainTextEdit;
    QPlainTextEdit *datetimePlainEdit;
    QCalendarWidget *calendarWidget;
    QGroupBox *calendarBox;
    QLabel *calendarLabel;
    QPlainTextEdit *calendarPlainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(541, 600);
        datatimeBox = new QGroupBox(Widget);
        datatimeBox->setObjectName("datatimeBox");
        datatimeBox->setGeometry(QRect(30, 30, 431, 181));
        timeEdit = new QTimeEdit(datatimeBox);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(90, 51, 151, 31));
        timeTabel = new QLabel(datatimeBox);
        timeTabel->setObjectName("timeTabel");
        timeTabel->setGeometry(QRect(20, 50, 51, 31));
        dateLabel = new QLabel(datatimeBox);
        dateLabel->setObjectName("dateLabel");
        dateLabel->setGeometry(QRect(20, 90, 51, 31));
        dateEdit = new QDateEdit(datatimeBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(90, 91, 151, 31));
        datatimeLabel = new QLabel(datatimeBox);
        datatimeLabel->setObjectName("datatimeLabel");
        datatimeLabel->setGeometry(QRect(10, 130, 71, 31));
        dateTimeEdit = new QDateTimeEdit(datatimeBox);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(90, 131, 151, 31));
        pushButton = new QPushButton(datatimeBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 20, 171, 24));
        timePlainTextEdit = new QPlainTextEdit(datatimeBox);
        timePlainTextEdit->setObjectName("timePlainTextEdit");
        timePlainTextEdit->setGeometry(QRect(250, 50, 161, 31));
        datePlainTextEdit = new QPlainTextEdit(datatimeBox);
        datePlainTextEdit->setObjectName("datePlainTextEdit");
        datePlainTextEdit->setGeometry(QRect(250, 90, 161, 31));
        datetimePlainEdit = new QPlainTextEdit(datatimeBox);
        datetimePlainEdit->setObjectName("datetimePlainEdit");
        datetimePlainEdit->setGeometry(QRect(250, 130, 161, 31));
        calendarWidget = new QCalendarWidget(Widget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(50, 360, 391, 211));
        calendarBox = new QGroupBox(Widget);
        calendarBox->setObjectName("calendarBox");
        calendarBox->setGeometry(QRect(30, 300, 441, 291));
        calendarLabel = new QLabel(calendarBox);
        calendarLabel->setObjectName("calendarLabel");
        calendarLabel->setGeometry(QRect(20, 20, 81, 31));
        calendarPlainTextEdit = new QPlainTextEdit(calendarBox);
        calendarPlainTextEdit->setObjectName("calendarPlainTextEdit");
        calendarPlainTextEdit->setGeometry(QRect(110, 20, 211, 31));
        calendarBox->raise();
        datatimeBox->raise();
        calendarWidget->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        datatimeBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264\357\274\210QTime\343\200\201QDate\343\200\201QDateTime", nullptr));
        timeTabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\227\266	\351\227\264</span></p></body></html>", nullptr));
        dateLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\227\245 \346\234\237</span></p></body></html>", nullptr));
        datatimeLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\227\245\346\234\237\346\227\266\351\227\264</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\216\267\345\217\226\345\275\223\345\211\215\346\227\266\351\227\264\346\227\245\346\234\237", nullptr));
        calendarBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\347\273\204\344\273\266(Calendar Widget)", nullptr));
        calendarLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\351\200\211\346\213\251\346\227\245\346\234\237:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
