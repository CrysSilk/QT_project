/********************************************************************************
** Form generated from reading UI file 'fontform.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTFORM_H
#define UI_FONTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FontForm
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *stylelabel;
    QCheckBox *BoldcheckBox;
    QCheckBox *ltaliccheckBox;
    QCheckBox *underlinecheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FontForm)
    {
        if (FontForm->objectName().isEmpty())
            FontForm->setObjectName("FontForm");
        FontForm->resize(295, 305);
        verticalLayout = new QVBoxLayout(FontForm);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        stylelabel = new QLabel(FontForm);
        stylelabel->setObjectName("stylelabel");

        verticalLayout->addWidget(stylelabel);

        BoldcheckBox = new QCheckBox(FontForm);
        BoldcheckBox->setObjectName("BoldcheckBox");
        BoldcheckBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(BoldcheckBox);

        ltaliccheckBox = new QCheckBox(FontForm);
        ltaliccheckBox->setObjectName("ltaliccheckBox");
        ltaliccheckBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(ltaliccheckBox);

        underlinecheckBox = new QCheckBox(FontForm);
        underlinecheckBox->setObjectName("underlinecheckBox");
        underlinecheckBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(underlinecheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FontForm);

        QMetaObject::connectSlotsByName(FontForm);
    } // setupUi

    void retranslateUi(QWidget *FontForm)
    {
        FontForm->setWindowTitle(QCoreApplication::translate("FontForm", "Form", nullptr));
        stylelabel->setText(QCoreApplication::translate("FontForm", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\255\227\344\275\223\346\240\267\345\274\217</span></p></body></html>", nullptr));
        BoldcheckBox->setText(QCoreApplication::translate("FontForm", "\345\212\240\347\262\227", nullptr));
        ltaliccheckBox->setText(QCoreApplication::translate("FontForm", "\346\226\234\344\275\223", nullptr));
        underlinecheckBox->setText(QCoreApplication::translate("FontForm", "\344\270\213\345\210\222\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FontForm: public Ui_FontForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTFORM_H
