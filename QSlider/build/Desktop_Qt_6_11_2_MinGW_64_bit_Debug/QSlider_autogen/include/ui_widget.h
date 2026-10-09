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
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSlider *sliderRed;
    QSlider *sliderGreen;
    QSlider *sliderBlue;
    QSlider *sliderAlpha;
    QLabel *colorLabel;
    QLabel *RedLabel;
    QLabel *GreenLabel;
    QLabel *BlueLabel;
    QLabel *AlphaLabel;
    QLabel *rgbLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(724, 351);
        sliderRed = new QSlider(Widget);
        sliderRed->setObjectName("sliderRed");
        sliderRed->setGeometry(QRect(90, 30, 211, 22));
        sliderRed->setOrientation(Qt::Orientation::Horizontal);
        sliderGreen = new QSlider(Widget);
        sliderGreen->setObjectName("sliderGreen");
        sliderGreen->setGeometry(QRect(90, 110, 211, 22));
        sliderGreen->setOrientation(Qt::Orientation::Horizontal);
        sliderBlue = new QSlider(Widget);
        sliderBlue->setObjectName("sliderBlue");
        sliderBlue->setGeometry(QRect(90, 190, 211, 22));
        sliderBlue->setOrientation(Qt::Orientation::Horizontal);
        sliderAlpha = new QSlider(Widget);
        sliderAlpha->setObjectName("sliderAlpha");
        sliderAlpha->setGeometry(QRect(90, 270, 211, 22));
        sliderAlpha->setOrientation(Qt::Orientation::Horizontal);
        colorLabel = new QLabel(Widget);
        colorLabel->setObjectName("colorLabel");
        colorLabel->setGeometry(QRect(370, 30, 311, 251));
        RedLabel = new QLabel(Widget);
        RedLabel->setObjectName("RedLabel");
        RedLabel->setGeometry(QRect(30, 30, 54, 21));
        GreenLabel = new QLabel(Widget);
        GreenLabel->setObjectName("GreenLabel");
        GreenLabel->setGeometry(QRect(23, 110, 61, 21));
        BlueLabel = new QLabel(Widget);
        BlueLabel->setObjectName("BlueLabel");
        BlueLabel->setGeometry(QRect(30, 190, 54, 21));
        AlphaLabel = new QLabel(Widget);
        AlphaLabel->setObjectName("AlphaLabel");
        AlphaLabel->setGeometry(QRect(30, 270, 54, 21));
        rgbLabel = new QLabel(Widget);
        rgbLabel->setObjectName("rgbLabel");
        rgbLabel->setGeometry(QRect(430, 310, 261, 31));
        rgbLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        colorLabel->setText(QString());
        RedLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Red</span></p></body></html>", nullptr));
        GreenLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Green</span></p></body></html>", nullptr));
        BlueLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Blue</span></p></body></html>", nullptr));
        AlphaLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Alpha</span></p></body></html>", nullptr));
        rgbLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
