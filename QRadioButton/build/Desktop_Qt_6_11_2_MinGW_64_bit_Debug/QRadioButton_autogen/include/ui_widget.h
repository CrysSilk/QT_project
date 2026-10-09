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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QRadioButton *maleradioButton;
    QRadioButton *femaleradioButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QRadioButton *doctorradioButton;
    QRadioButton *masterradioButton;
    QRadioButton *undergraduateradioButton;
    QRadioButton *otherradioButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *contentLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(332, 174);
        horizontalLayout_5 = new QHBoxLayout(Widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        maleradioButton = new QRadioButton(frame);
        maleradioButton->setObjectName("maleradioButton");
        QFont font2;
        font2.setPointSize(12);
        maleradioButton->setFont(font2);

        horizontalLayout->addWidget(maleradioButton);

        femaleradioButton = new QRadioButton(frame);
        femaleradioButton->setObjectName("femaleradioButton");
        femaleradioButton->setFont(font2);

        horizontalLayout->addWidget(femaleradioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        doctorradioButton = new QRadioButton(frame);
        doctorradioButton->setObjectName("doctorradioButton");
        doctorradioButton->setFont(font2);

        horizontalLayout_2->addWidget(doctorradioButton);

        masterradioButton = new QRadioButton(frame);
        masterradioButton->setObjectName("masterradioButton");
        masterradioButton->setFont(font2);

        horizontalLayout_2->addWidget(masterradioButton);

        undergraduateradioButton = new QRadioButton(frame);
        undergraduateradioButton->setObjectName("undergraduateradioButton");
        undergraduateradioButton->setFont(font2);

        horizontalLayout_2->addWidget(undergraduateradioButton);

        otherradioButton = new QRadioButton(frame);
        otherradioButton->setObjectName("otherradioButton");
        otherradioButton->setFont(font2);

        horizontalLayout_2->addWidget(otherradioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        contentLabel = new QLabel(frame);
        contentLabel->setObjectName("contentLabel");
        contentLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(contentLabel);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "1.\345\234\250Frame\342\200\234\345\210\206\347\273\204\342\200\235\344\270\255", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "(\342\210\232\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
        maleradioButton->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        femaleradioButton->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\255\246\345\216\206", nullptr));
        doctorradioButton->setText(QCoreApplication::translate("Widget", "\345\215\232\345\243\253", nullptr));
        masterradioButton->setText(QCoreApplication::translate("Widget", "\347\241\225\345\243\253", nullptr));
        undergraduateradioButton->setText(QCoreApplication::translate("Widget", "\346\234\254\347\247\221", nullptr));
        otherradioButton->setText(QCoreApplication::translate("Widget", "\345\205\266\344\273\226", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\347\232\204\351\200\211\346\213\251:", nullptr));
        contentLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
