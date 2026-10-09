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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *boyLabel;
    QLabel *girlLabel;
    QSpinBox *BoyAgeSpinBox;
    QSpinBox *GirlAgeSpinBox;
    QPushButton *BoyButton;
    QPushButton *GirlButton;
    QLineEdit *lineEdit;
    QPushButton *showButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(558, 322);
        boyLabel = new QLabel(Widget);
        boyLabel->setObjectName("boyLabel");
        boyLabel->setGeometry(QRect(10, 20, 101, 21));
        girlLabel = new QLabel(Widget);
        girlLabel->setObjectName("girlLabel");
        girlLabel->setGeometry(QRect(10, 120, 101, 21));
        BoyAgeSpinBox = new QSpinBox(Widget);
        BoyAgeSpinBox->setObjectName("BoyAgeSpinBox");
        BoyAgeSpinBox->setGeometry(QRect(20, 40, 91, 22));
        GirlAgeSpinBox = new QSpinBox(Widget);
        GirlAgeSpinBox->setObjectName("GirlAgeSpinBox");
        GirlAgeSpinBox->setGeometry(QRect(20, 140, 91, 22));
        BoyButton = new QPushButton(Widget);
        BoyButton->setObjectName("BoyButton");
        BoyButton->setGeometry(QRect(20, 70, 71, 21));
        GirlButton = new QPushButton(Widget);
        GirlButton->setObjectName("GirlButton");
        GirlButton->setGeometry(QRect(20, 170, 71, 21));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 20, 351, 281));
        showButton = new QPushButton(Widget);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(20, 230, 81, 31));
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(20, 270, 81, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        boyLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\256\276\347\275\256\347\224\267\347\224\237\347\232\204\345\271\264\351\276\204:</span></p></body></html>", nullptr));
        girlLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\256\276\347\275\256\345\245\263\347\224\237\347\232\204\345\271\264\351\276\204:</span></p></body></html>", nullptr));
        BoyButton->setText(QCoreApplication::translate("Widget", "Boy:Age \345\242\236\345\212\240", nullptr));
        GirlButton->setText(QCoreApplication::translate("Widget", "Girl:Age \345\242\236\345\212\240", nullptr));
        showButton->setText(QCoreApplication::translate("Widget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
