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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_1;
    QFrame *frame_1;
    QVBoxLayout *verticalLayout;
    QLineEdit *timelineEdit;
    QWidget *setWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *AlignWidget;
    QVBoxLayout *verticalLayout_9;
    QLabel *Alignlabel;
    QRadioButton *leftAlignradioButton;
    QRadioButton *centerAlignradioButton;
    QRadioButton *rightAlignradioButton;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *position_size_lineEdit;
    QPushButton *getPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setPushButton;
    QPushButton *movePushButton;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *titlelineEdit;
    QPushButton *setTitlePushButton;
    QPushButton *replacePushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(471, 541);
        verticalLayout_7 = new QVBoxLayout(Widget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_1 = new QLabel(Widget);
        label_1->setObjectName("label_1");

        verticalLayout_2->addWidget(label_1);

        frame_1 = new QFrame(Widget);
        frame_1->setObjectName("frame_1");
        frame_1->setFrameShape(QFrame::Shape::Box);
        frame_1->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_1);
        verticalLayout->setObjectName("verticalLayout");
        timelineEdit = new QLineEdit(frame_1);
        timelineEdit->setObjectName("timelineEdit");
        QFont font;
        font.setPointSize(14);
        timelineEdit->setFont(font);

        verticalLayout->addWidget(timelineEdit);

        setWidget = new QWidget(frame_1);
        setWidget->setObjectName("setWidget");
        horizontalLayout = new QHBoxLayout(setWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        AlignWidget = new QWidget(setWidget);
        AlignWidget->setObjectName("AlignWidget");
        verticalLayout_9 = new QVBoxLayout(AlignWidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        Alignlabel = new QLabel(AlignWidget);
        Alignlabel->setObjectName("Alignlabel");

        verticalLayout_9->addWidget(Alignlabel);

        leftAlignradioButton = new QRadioButton(AlignWidget);
        leftAlignradioButton->setObjectName("leftAlignradioButton");
        leftAlignradioButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        verticalLayout_9->addWidget(leftAlignradioButton);

        centerAlignradioButton = new QRadioButton(AlignWidget);
        centerAlignradioButton->setObjectName("centerAlignradioButton");
        centerAlignradioButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        verticalLayout_9->addWidget(centerAlignradioButton);

        rightAlignradioButton = new QRadioButton(AlignWidget);
        rightAlignradioButton->setObjectName("rightAlignradioButton");
        rightAlignradioButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        verticalLayout_9->addWidget(rightAlignradioButton);


        horizontalLayout->addWidget(AlignWidget);


        verticalLayout->addWidget(setWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        verticalLayout_2->addWidget(frame_1);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        verticalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        frame_2 = new QFrame(Widget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::Box);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        position_size_lineEdit = new QLineEdit(frame_2);
        position_size_lineEdit->setObjectName("position_size_lineEdit");
        position_size_lineEdit->setFont(font);

        horizontalLayout_3->addWidget(position_size_lineEdit);

        getPushButton = new QPushButton(frame_2);
        getPushButton->setObjectName("getPushButton");
        getPushButton->setFont(font);

        horizontalLayout_3->addWidget(getPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        setPushButton = new QPushButton(frame_2);
        setPushButton->setObjectName("setPushButton");
        setPushButton->setFont(font);

        horizontalLayout_2->addWidget(setPushButton);

        movePushButton = new QPushButton(frame_2);
        movePushButton->setObjectName("movePushButton");
        movePushButton->setFont(font);

        horizontalLayout_2->addWidget(movePushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(frame_2);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 10);

        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        frame_3 = new QFrame(Widget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::Box);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        titlelineEdit = new QLineEdit(frame_3);
        titlelineEdit->setObjectName("titlelineEdit");
        titlelineEdit->setFont(font);

        horizontalLayout_6->addWidget(titlelineEdit);

        setTitlePushButton = new QPushButton(frame_3);
        setTitlePushButton->setObjectName("setTitlePushButton");
        setTitlePushButton->setFont(font);

        horizontalLayout_6->addWidget(setTitlePushButton);

        horizontalLayout_6->setStretch(0, 4);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_6);

        replacePushButton = new QPushButton(frame_3);
        replacePushButton->setObjectName("replacePushButton");
        replacePushButton->setFont(font);

        verticalLayout_6->addWidget(replacePushButton);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);

        verticalLayout_5->addWidget(frame_3);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 10);

        verticalLayout_7->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        verticalLayout_7->setStretch(0, 2);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 1);
        verticalLayout_7->setStretch(3, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_1->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">1.\345\206\205\345\265\214\347\252\227\345\217\243\343\200\201\347\213\254\347\253\213\347\252\227\345\217\243</span></p></body></html>", nullptr));
        Alignlabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\271\351\275\220\346\226\271\345\274\217</span></p></body></html>", nullptr));
        leftAlignradioButton->setText(QCoreApplication::translate("Widget", "\345\267\246\345\257\271\351\275\220", nullptr));
        centerAlignradioButton->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
        rightAlignradioButton->setText(QCoreApplication::translate("Widget", "\345\217\263\345\257\271\351\275\220", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">2.\347\252\227\345\217\243\344\275\215\347\275\256\345\222\214\345\244\247\345\260\217</span></p></body></html>", nullptr));
        getPushButton->setText(QCoreApplication::translate("Widget", "\350\216\267\345\217\226", nullptr));
        setPushButton->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\252\227\345\217\243\345\244\247\345\260\217\344\270\272:520*520", nullptr));
        movePushButton->setText(QCoreApplication::translate("Widget", "\347\247\273\345\212\250\347\252\227\345\217\243\345\210\260(1314,520)", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">3.\347\252\227\345\217\243\346\240\207\351\242\230\343\200\201\345\233\276\346\240\207</span></p></body></html>", nullptr));
        setTitlePushButton->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\240\207\351\242\230", nullptr));
        replacePushButton->setText(QCoreApplication::translate("Widget", "\346\233\264\346\215\242\345\233\276\346\240\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
