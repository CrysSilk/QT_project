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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirmpushButton;
    QPushButton *cancelpushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *startpushButton;
    QPushButton *stoppushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *backgroundwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *squarelabel;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *rightpushButton;
    QPushButton *resetpushButton;
    QPushButton *uppushButton;
    QPushButton *leftpushButton;
    QPushButton *downpushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_1 = new QLabel(Widget);
        label_1->setObjectName("label_1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_1);

        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        confirmpushButton = new QPushButton(frame);
        confirmpushButton->setObjectName("confirmpushButton");
        QFont font;
        font.setPointSize(9);
        confirmpushButton->setFont(font);

        horizontalLayout->addWidget(confirmpushButton);

        cancelpushButton = new QPushButton(frame);
        cancelpushButton->setObjectName("cancelpushButton");

        horizontalLayout->addWidget(cancelpushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startpushButton = new QPushButton(frame);
        startpushButton->setObjectName("startpushButton");

        horizontalLayout->addWidget(startpushButton);

        stoppushButton = new QPushButton(frame);
        stoppushButton->setObjectName("stoppushButton");

        horizontalLayout->addWidget(stoppushButton);


        verticalLayout->addWidget(frame);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        frame_2 = new QFrame(Widget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::Box);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        backgroundwidget = new QWidget(frame_2);
        backgroundwidget->setObjectName("backgroundwidget");
        backgroundwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_3 = new QVBoxLayout(backgroundwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        squarelabel = new QLabel(backgroundwidget);
        squarelabel->setObjectName("squarelabel");
        squarelabel->setMinimumSize(QSize(50, 50));
        squarelabel->setMaximumSize(QSize(50, 50));
        squarelabel->setStyleSheet(QString::fromUtf8("background-color:black;"));

        verticalLayout_3->addWidget(squarelabel);


        horizontalLayout_2->addWidget(backgroundwidget);

        widget = new QWidget(frame_2);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 50));
        widget->setSizeIncrement(QSize(0, 0));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        rightpushButton = new QPushButton(widget);
        rightpushButton->setObjectName("rightpushButton");
        rightpushButton->setMinimumSize(QSize(50, 50));
        rightpushButton->setMaximumSize(QSize(50, 50));
        rightpushButton->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(rightpushButton, 1, 2, 1, 1);

        resetpushButton = new QPushButton(widget);
        resetpushButton->setObjectName("resetpushButton");
        resetpushButton->setMinimumSize(QSize(50, 50));
        resetpushButton->setMaximumSize(QSize(50, 50));
        resetpushButton->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(resetpushButton, 1, 1, 1, 1);

        uppushButton = new QPushButton(widget);
        uppushButton->setObjectName("uppushButton");
        uppushButton->setMinimumSize(QSize(50, 50));
        uppushButton->setMaximumSize(QSize(50, 50));
        uppushButton->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(uppushButton, 0, 1, 1, 1);

        leftpushButton = new QPushButton(widget);
        leftpushButton->setObjectName("leftpushButton");
        leftpushButton->setMinimumSize(QSize(50, 50));
        leftpushButton->setMaximumSize(QSize(50, 50));
        leftpushButton->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(leftpushButton, 1, 0, 1, 1);

        downpushButton = new QPushButton(widget);
        downpushButton->setObjectName("downpushButton");
        downpushButton->setMinimumSize(QSize(50, 50));
        downpushButton->setMaximumSize(QSize(50, 50));
        downpushButton->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(downpushButton, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(widget);


        verticalLayout_2->addWidget(frame_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4->setStretch(1, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_1->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">1.\346\226\207\346\234\254\343\200\201\345\233\276\346\240\207\343\200\201\344\275\277\350\203\275</span></p></body></html>", nullptr));
        confirmpushButton->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        cancelpushButton->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        startpushButton->setText(QCoreApplication::translate("Widget", "\345\220\257\345\212\250", nullptr));
        stoppushButton->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">2.\344\277\241\345\217\267\346\247\275\343\200\201\345\277\253\346\215\267\351\224\256\343\200\201\346\240\267\345\274\217\350\241\250</span></p></body></html>", nullptr));
        squarelabel->setText(QString());
        rightpushButton->setText(QString());
        resetpushButton->setText(QString());
        uppushButton->setText(QString());
        leftpushButton->setText(QString());
        downpushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
