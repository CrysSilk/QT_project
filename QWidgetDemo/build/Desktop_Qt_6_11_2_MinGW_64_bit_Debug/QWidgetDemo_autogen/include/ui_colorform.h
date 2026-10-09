/********************************************************************************
** Form generated from reading UI file 'colorform.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORFORM_H
#define UI_COLORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorForm
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *font_colorlabel;
    QRadioButton *redradioButton;
    QRadioButton *greenradioButton;
    QRadioButton *blueradioButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ColorForm)
    {
        if (ColorForm->objectName().isEmpty())
            ColorForm->setObjectName("ColorForm");
        ColorForm->resize(215, 160);
        verticalLayout = new QVBoxLayout(ColorForm);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        font_colorlabel = new QLabel(ColorForm);
        font_colorlabel->setObjectName("font_colorlabel");
        font_colorlabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(font_colorlabel);

        redradioButton = new QRadioButton(ColorForm);
        redradioButton->setObjectName("redradioButton");
        redradioButton->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(redradioButton);

        greenradioButton = new QRadioButton(ColorForm);
        greenradioButton->setObjectName("greenradioButton");
        greenradioButton->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(greenradioButton);

        blueradioButton = new QRadioButton(ColorForm);
        blueradioButton->setObjectName("blueradioButton");
        blueradioButton->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(blueradioButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(ColorForm);

        QMetaObject::connectSlotsByName(ColorForm);
    } // setupUi

    void retranslateUi(QWidget *ColorForm)
    {
        ColorForm->setWindowTitle(QCoreApplication::translate("ColorForm", "Form", nullptr));
        font_colorlabel->setText(QCoreApplication::translate("ColorForm", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        redradioButton->setText(QCoreApplication::translate("ColorForm", "\347\272\242\350\211\262", nullptr));
        greenradioButton->setText(QCoreApplication::translate("ColorForm", "\347\273\277\350\211\262", nullptr));
        blueradioButton->setText(QCoreApplication::translate("ColorForm", "\350\223\235\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorForm: public Ui_ColorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFORM_H
