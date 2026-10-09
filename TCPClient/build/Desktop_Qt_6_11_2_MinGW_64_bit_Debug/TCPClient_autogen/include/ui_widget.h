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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *sendButton;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *recvBox;
    QGroupBox *sendBox;
    QTextEdit *textEdit;
    QGroupBox *networkBox;
    QPushButton *connectButton;
    QPushButton *cnacelButton;
    QLabel *PortLabel;
    QLabel *IPLabel;
    QLineEdit *PortlineEdit;
    QLineEdit *IPlineEdit;
    QPushButton *sdrButton;
    QGroupBox *sendsetBox;
    QGroupBox *savesetButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1038, 731);
        sendButton = new QPushButton(Widget);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(880, 530, 131, 181));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(340, 60, 671, 441));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font-size: 15px;"));
        recvBox = new QGroupBox(Widget);
        recvBox->setObjectName("recvBox");
        recvBox->setGeometry(QRect(330, 30, 691, 481));
        recvBox->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold;"));
        sendBox = new QGroupBox(Widget);
        sendBox->setObjectName("sendBox");
        sendBox->setGeometry(QRect(330, 520, 691, 201));
        sendBox->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold;"));
        textEdit = new QTextEdit(sendBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(13, 20, 531, 171));
        networkBox = new QGroupBox(Widget);
        networkBox->setObjectName("networkBox");
        networkBox->setGeometry(QRect(30, 30, 231, 191));
        networkBox->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold;"));
        connectButton = new QPushButton(networkBox);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(30, 140, 70, 30));
        cnacelButton = new QPushButton(networkBox);
        cnacelButton->setObjectName("cnacelButton");
        cnacelButton->setGeometry(QRect(140, 140, 70, 30));
        PortLabel = new QLabel(networkBox);
        PortLabel->setObjectName("PortLabel");
        PortLabel->setGeometry(QRect(20, 80, 141, 31));
        IPLabel = new QLabel(networkBox);
        IPLabel->setObjectName("IPLabel");
        IPLabel->setGeometry(QRect(20, 20, 111, 31));
        PortlineEdit = new QLineEdit(networkBox);
        PortlineEdit->setObjectName("PortlineEdit");
        PortlineEdit->setGeometry(QRect(20, 110, 200, 20));
        IPlineEdit = new QLineEdit(networkBox);
        IPlineEdit->setObjectName("IPlineEdit");
        IPlineEdit->setGeometry(QRect(20, 50, 200, 20));
        sdrButton = new QPushButton(Widget);
        sdrButton->setObjectName("sdrButton");
        sdrButton->setGeometry(QRect(230, 680, 80, 30));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        sdrButton->setFont(font);
        sendsetBox = new QGroupBox(Widget);
        sendsetBox->setObjectName("sendsetBox");
        sendsetBox->setGeometry(QRect(20, 530, 291, 191));
        sendsetBox->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold;"));
        savesetButton = new QGroupBox(Widget);
        savesetButton->setObjectName("savesetButton");
        savesetButton->setGeometry(QRect(20, 290, 291, 191));
        QFont font1;
        font1.setBold(true);
        savesetButton->setFont(font1);
        savesetButton->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: bold;"));
        clearButton = new QPushButton(savesetButton);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(200, 150, 80, 30));
        clearButton->setFont(font1);
        sendsetBox->raise();
        savesetButton->raise();
        recvBox->raise();
        sendBox->raise();
        sendButton->raise();
        plainTextEdit->raise();
        networkBox->raise();
        sdrButton->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        recvBox->setTitle(QCoreApplication::translate("Widget", "\347\275\221\347\273\234\346\225\260\346\215\256\346\216\245\346\224\266", nullptr));
        sendBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\345\217\221\351\200\201", nullptr));
        networkBox->setTitle(QCoreApplication::translate("Widget", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        connectButton->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        cnacelButton->setText(QCoreApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        PortLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">2.\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267(Port):</span></p></body></html>", nullptr));
        IPLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">1.\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200(IP):</span></p></body></html>", nullptr));
        sdrButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
        sendsetBox->setTitle(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        savesetButton->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
