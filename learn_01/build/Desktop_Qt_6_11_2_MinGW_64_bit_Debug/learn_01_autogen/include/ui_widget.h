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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *hint;
    QLabel *lconLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *commitButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *concelButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *browseButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *openLabel;
    QLineEdit *cmdLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(486, 222);
        hint = new QLabel(Widget);
        hint->setObjectName("hint");
        hint->setGeometry(QRect(100, 40, 331, 51));
        lconLabel = new QLabel(Widget);
        lconLabel->setObjectName("lconLabel");
        lconLabel->setGeometry(QRect(40, 40, 51, 51));
        lconLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/lcon.bmp")));
        lconLabel->setScaledContents(true);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 170, 251, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        commitButton = new QPushButton(widget);
        commitButton->setObjectName("commitButton");
        commitButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(commitButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        concelButton = new QPushButton(widget);
        concelButton->setObjectName("concelButton");
        concelButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(concelButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        browseButton = new QPushButton(widget);
        browseButton->setObjectName("browseButton");
        browseButton->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(browseButton);

        widget1 = new QWidget(Widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(60, 110, 361, 51));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        openLabel = new QLabel(widget1);
        openLabel->setObjectName("openLabel");

        horizontalLayout_2->addWidget(openLabel);

        cmdLineEdit = new QLineEdit(widget1);
        cmdLineEdit->setObjectName("cmdLineEdit");
        cmdLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    min-height: 30px; \n"
"}"));

        horizontalLayout_2->addWidget(cmdLineEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\277\220\350\241\214", nullptr));
        hint->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">Windows \345\260\206\346\240\271\346\215\256\344\275\240\346\211\200\350\276\223\345\205\245\347\232\204\345\220\215\347\247\260\357\274\214\344\270\272\344\275\240\346\211\223\345\274\200\347\233\270\345\272\224\347\232\204\347\250\213\345\272\217\343\200\201</span></p><p><span style=\" font-size:10pt;\">\346\226\207\344\273\266\345\244\271\343\200\201\346\226\207\346\241\243\346\210\226Internet\350\265\204\346\272\220</span></p></body></html>", nullptr));
        lconLabel->setText(QString());
        commitButton->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        concelButton->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        browseButton->setText(QCoreApplication::translate("Widget", "\346\265\217\350\247\210(B)...", nullptr));
        openLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\211\223\345\274\200(O):</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
