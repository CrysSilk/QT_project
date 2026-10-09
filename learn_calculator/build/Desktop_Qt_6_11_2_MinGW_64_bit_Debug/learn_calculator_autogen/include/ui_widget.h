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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *rightButton;
    QPushButton *equalButton;
    QPushButton *mulButton;
    QPushButton *fourButton;
    QPushButton *clearButton;
    QPushButton *plusButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *zeroButton;
    QPushButton *modButton;
    QPushButton *delButton;
    QPushButton *nineButton;
    QPushButton *leftButton;
    QPushButton *minueButton;
    QPushButton *divButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *sevenButton;
    QPushButton *threeButton;
    QPushButton *eightButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(300, 420);
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName("mainLineEdit");
        mainLineEdit->setGeometry(QRect(10, 10, 281, 51));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 81, 281, 331));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rightButton = new QPushButton(widget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(50, 50));
        rightButton->setMaximumSize(QSize(50, 50));
        rightButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(rightButton, 5, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName("equalButton");
        equalButton->setMinimumSize(QSize(50, 50));
        equalButton->setMaximumSize(QSize(50, 50));
        equalButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(equalButton, 5, 3, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName("mulButton");
        mulButton->setMinimumSize(QSize(50, 50));
        mulButton->setMaximumSize(QSize(50, 50));
        mulButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(mulButton, 1, 3, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName("fourButton");
        fourButton->setMinimumSize(QSize(50, 50));
        fourButton->setMaximumSize(QSize(50, 50));
        fourButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(fourButton, 3, 0, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(50, 50));
        clearButton->setMaximumSize(QSize(50, 50));
        clearButton->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        plusButton = new QPushButton(widget);
        plusButton->setObjectName("plusButton");
        plusButton->setMinimumSize(QSize(50, 50));
        plusButton->setMaximumSize(QSize(50, 50));
        plusButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(plusButton, 4, 3, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(50, 50));
        fiveButton->setMaximumSize(QSize(50, 50));
        fiveButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(fiveButton, 3, 1, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(50, 50));
        sixButton->setMaximumSize(QSize(50, 50));
        sixButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(sixButton, 3, 2, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setMinimumSize(QSize(50, 50));
        zeroButton->setMaximumSize(QSize(50, 50));
        zeroButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(zeroButton, 5, 1, 1, 1);

        modButton = new QPushButton(widget);
        modButton->setObjectName("modButton");
        modButton->setMinimumSize(QSize(50, 50));
        modButton->setMaximumSize(QSize(50, 50));
        modButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(modButton, 0, 2, 1, 1);

        delButton = new QPushButton(widget);
        delButton->setObjectName("delButton");
        delButton->setMinimumSize(QSize(50, 50));
        delButton->setMaximumSize(QSize(50, 50));
        delButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(delButton, 0, 1, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName("nineButton");
        nineButton->setMinimumSize(QSize(50, 50));
        nineButton->setMaximumSize(QSize(50, 50));
        nineButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(50, 50));
        leftButton->setMaximumSize(QSize(50, 50));
        leftButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(leftButton, 5, 0, 1, 1);

        minueButton = new QPushButton(widget);
        minueButton->setObjectName("minueButton");
        minueButton->setMinimumSize(QSize(50, 50));
        minueButton->setMaximumSize(QSize(50, 50));
        minueButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(minueButton, 3, 3, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName("divButton");
        divButton->setMinimumSize(QSize(50, 50));
        divButton->setMaximumSize(QSize(50, 50));
        divButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(divButton, 0, 3, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName("oneButton");
        oneButton->setMinimumSize(QSize(50, 50));
        oneButton->setMaximumSize(QSize(50, 50));
        oneButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(oneButton, 4, 0, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName("twoButton");
        twoButton->setMinimumSize(QSize(50, 50));
        twoButton->setMaximumSize(QSize(50, 50));
        twoButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(twoButton, 4, 1, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setMinimumSize(QSize(50, 50));
        sevenButton->setMaximumSize(QSize(50, 50));
        sevenButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName("threeButton");
        threeButton->setMinimumSize(QSize(50, 50));
        threeButton->setMaximumSize(QSize(50, 50));
        threeButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(threeButton, 4, 2, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(50, 50));
        eightButton->setMaximumSize(QSize(50, 50));
        eightButton->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        plusButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        modButton->setText(QCoreApplication::translate("Widget", "%", nullptr));
        delButton->setText(QString());
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        minueButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
