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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *fontLabel;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_center;
    QCheckBox *checkBox_italic;
    QRadioButton *radioButton_right;
    QLabel *label_6;
    QRadioButton *radioButton_left;
    QLabel *label_7;
    QCheckBox *checkBox_underline;
    QCheckBox *checkBox_bold;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *breakLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *disableWrappushButton;
    QPushButton *EnableWrappushButton;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_pic1;
    QLabel *label_pic2;
    QLabel *label_pic3;
    QLabel *label_pic4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_gif1;
    QLabel *label_gif2;
    QLabel *label_gif3;
    QLabel *label_gif4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1046, 905);
        verticalLayout_9 = new QVBoxLayout(Widget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        fontLabel = new QLabel(frame);
        fontLabel->setObjectName("fontLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontLabel->sizePolicy().hasHeightForWidth());
        fontLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        fontLabel->setFont(font1);
        fontLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(fontLabel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        radioButton_center = new QRadioButton(frame);
        radioButton_center->setObjectName("radioButton_center");
        QFont font2;
        font2.setPointSize(12);
        radioButton_center->setFont(font2);

        gridLayout_2->addWidget(radioButton_center, 0, 2, 1, 1);

        checkBox_italic = new QCheckBox(frame);
        checkBox_italic->setObjectName("checkBox_italic");
        checkBox_italic->setFont(font2);

        gridLayout_2->addWidget(checkBox_italic, 1, 2, 1, 1);

        radioButton_right = new QRadioButton(frame);
        radioButton_right->setObjectName("radioButton_right");
        radioButton_right->setFont(font2);

        gridLayout_2->addWidget(radioButton_right, 0, 3, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        radioButton_left = new QRadioButton(frame);
        radioButton_left->setObjectName("radioButton_left");
        radioButton_left->setFont(font2);

        gridLayout_2->addWidget(radioButton_left, 0, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        checkBox_underline = new QCheckBox(frame);
        checkBox_underline->setObjectName("checkBox_underline");
        checkBox_underline->setFont(font2);

        gridLayout_2->addWidget(checkBox_underline, 1, 3, 1, 1);

        checkBox_bold = new QCheckBox(frame);
        checkBox_bold->setObjectName("checkBox_bold");
        checkBox_bold->setFont(font2);

        gridLayout_2->addWidget(checkBox_bold, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(frame);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_4->addWidget(label_2);

        frame_2 = new QFrame(Widget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::Box);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        breakLabel = new QLabel(frame_2);
        breakLabel->setObjectName("breakLabel");
        QFont font3;
        font3.setPointSize(14);
        breakLabel->setFont(font3);
        breakLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(breakLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        disableWrappushButton = new QPushButton(frame_2);
        disableWrappushButton->setObjectName("disableWrappushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(disableWrappushButton->sizePolicy().hasHeightForWidth());
        disableWrappushButton->setSizePolicy(sizePolicy1);
        disableWrappushButton->setFont(font);

        horizontalLayout->addWidget(disableWrappushButton);

        EnableWrappushButton = new QPushButton(frame_2);
        EnableWrappushButton->setObjectName("EnableWrappushButton");
        sizePolicy1.setHeightForWidth(EnableWrappushButton->sizePolicy().hasHeightForWidth());
        EnableWrappushButton->setSizePolicy(sizePolicy1);
        EnableWrappushButton->setFont(font);

        horizontalLayout->addWidget(EnableWrappushButton);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_6->setStretch(1, 1);

        verticalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_4->addWidget(frame_2);

        verticalLayout_4->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout_7->addWidget(label_3);

        frame_3 = new QFrame(Widget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::Box);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_pic1 = new QLabel(frame_3);
        label_pic1->setObjectName("label_pic1");
        label_pic1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_pic1->setScaledContents(false);

        horizontalLayout_2->addWidget(label_pic1);

        label_pic2 = new QLabel(frame_3);
        label_pic2->setObjectName("label_pic2");
        label_pic2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_pic2->setScaledContents(false);

        horizontalLayout_2->addWidget(label_pic2);

        label_pic3 = new QLabel(frame_3);
        label_pic3->setObjectName("label_pic3");
        label_pic3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_pic3->setScaledContents(false);

        horizontalLayout_2->addWidget(label_pic3);

        label_pic4 = new QLabel(frame_3);
        label_pic4->setObjectName("label_pic4");
        label_pic4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_pic4->setScaledContents(false);

        horizontalLayout_2->addWidget(label_pic4);


        verticalLayout_7->addWidget(frame_3);

        verticalLayout_7->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_12 = new QLabel(Widget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        verticalLayout_8->addWidget(label_12);

        frame_4 = new QFrame(Widget);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::Box);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_gif1 = new QLabel(frame_4);
        label_gif1->setObjectName("label_gif1");
        label_gif1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(label_gif1);

        label_gif2 = new QLabel(frame_4);
        label_gif2->setObjectName("label_gif2");
        label_gif2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));

        horizontalLayout_3->addWidget(label_gif2);

        label_gif3 = new QLabel(frame_4);
        label_gif3->setObjectName("label_gif3");
        label_gif3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        horizontalLayout_3->addWidget(label_gif3);

        label_gif4 = new QLabel(frame_4);
        label_gif4->setObjectName("label_gif4");
        label_gif4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        horizontalLayout_3->addWidget(label_gif4);


        verticalLayout_8->addWidget(frame_4);

        verticalLayout_8->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        frame->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        disableWrappushButton->raise();
        EnableWrappushButton->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "1.\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
        fontLabel->setText(QCoreApplication::translate("Widget", "2026-03-16   12:10:00", nullptr));
        radioButton_center->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
        checkBox_italic->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        radioButton_right->setText(QCoreApplication::translate("Widget", "\345\217\263\345\257\271\351\275\220", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\257\271\351\275\220\346\226\271\345\274\217", nullptr));
        radioButton_left->setText(QCoreApplication::translate("Widget", "\345\267\246\345\257\271\351\275\220", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\255\227\344\275\223\346\240\267\345\274\217", nullptr));
        checkBox_underline->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        checkBox_bold->setText(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "2.\346\226\207\346\234\254\346\215\242\350\241\214", nullptr));
        breakLabel->setText(QCoreApplication::translate("Widget", "2026-03-16   12:10:00", nullptr));
        disableWrappushButton->setText(QCoreApplication::translate("Widget", "\347\246\201\346\255\242\346\215\242\350\241\214", nullptr));
        EnableWrappushButton->setText(QCoreApplication::translate("Widget", "\345\205\201\350\256\270\346\215\242\350\241\214", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "3.\345\212\240\350\275\275\351\235\231\346\200\201\345\233\276\347\211\207", nullptr));
        label_pic1->setText(QString());
        label_pic2->setText(QString());
        label_pic3->setText(QString());
        label_pic4->setText(QString());
        label_12->setText(QCoreApplication::translate("Widget", "3.\345\212\240\350\275\275\345\212\250\346\200\201\345\233\276\347\211\207", nullptr));
        label_gif1->setText(QString());
        label_gif2->setText(QString());
        label_gif3->setText(QString());
        label_gif4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
