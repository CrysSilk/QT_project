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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QProgressBar *downloadProgressBar;
    QPushButton *downloadpushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *copyprogressBar;
    QPushButton *copypushButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(858, 403);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        downloadProgressBar = new QProgressBar(Widget);
        downloadProgressBar->setObjectName("downloadProgressBar");
        QFont font1;
        font1.setPointSize(12);
        downloadProgressBar->setFont(font1);
        downloadProgressBar->setValue(0);

        horizontalLayout->addWidget(downloadProgressBar);

        downloadpushButton = new QPushButton(Widget);
        downloadpushButton->setObjectName("downloadpushButton");
        downloadpushButton->setFont(font);

        horizontalLayout->addWidget(downloadpushButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        copyprogressBar = new QProgressBar(Widget);
        copyprogressBar->setObjectName("copyprogressBar");
        copyprogressBar->setFont(font1);
        copyprogressBar->setMaximum(1000);
        copyprogressBar->setValue(0);
        copyprogressBar->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(copyprogressBar);

        copypushButton = new QPushButton(Widget);
        copypushButton->setObjectName("copypushButton");
        copypushButton->setFont(font);

        horizontalLayout_2->addWidget(copypushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        progressBar_3 = new QProgressBar(Widget);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setFont(font1);
        progressBar_3->setStyleSheet(QString::fromUtf8(""));
        progressBar_3->setMaximum(0);
        progressBar_3->setValue(-1);

        horizontalLayout_3->addWidget(progressBar_3);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\255\243\345\234\250\344\270\213\350\275\275\357\274\214\350\257\267\347\250\215\345\200\231...", nullptr));
        downloadpushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\344\270\213\350\275\275", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\255\243\345\234\250\346\213\267\350\264\235\357\274\214\350\257\267\347\250\215\345\200\231...", nullptr));
        copyprogressBar->setFormat(QCoreApplication::translate("Widget", "%v / %m", nullptr));
        copypushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\213\267\350\264\235", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\275\221\347\273\234\350\257\267\346\261\202\344\270\255\357\274\214\350\257\267\347\250\215\345\200\231...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
