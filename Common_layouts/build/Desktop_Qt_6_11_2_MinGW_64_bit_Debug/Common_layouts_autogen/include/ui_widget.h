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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPushButton;
    QPushButton *delPushButton;
    QPushButton *modifyPushButton;
    QPushButton *queryPushButton;
    QTextEdit *LeveltextEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTextEdit *GridtextEdit;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_mc;
    QPushButton *pushButton_7;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mr;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_square;
    QPushButton *pushButton_ms;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_reciprocal;
    QPushButton *pushButton_mPlus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_8;
    QPushButton *pushButton_clearAll;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *namelabel;
    QLineEdit *namelineEdit;
    QLabel *emaillabel;
    QLineEdit *emaillineEdit;
    QLabel *positionlabel;
    QComboBox *positionComboBox;
    QLabel *worklabel;
    QSpinBox *workSpinBox;
    QPushButton *submitPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(920, 547);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        addPushButton = new QPushButton(widget);
        addPushButton->setObjectName("addPushButton");

        horizontalLayout->addWidget(addPushButton);

        delPushButton = new QPushButton(widget);
        delPushButton->setObjectName("delPushButton");

        horizontalLayout->addWidget(delPushButton);

        modifyPushButton = new QPushButton(widget);
        modifyPushButton->setObjectName("modifyPushButton");

        horizontalLayout->addWidget(modifyPushButton);

        queryPushButton = new QPushButton(widget);
        queryPushButton->setObjectName("queryPushButton");

        horizontalLayout->addWidget(queryPushButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addWidget(widget);

        LeveltextEdit = new QTextEdit(groupBox);
        LeveltextEdit->setObjectName("LeveltextEdit");

        verticalLayout->addWidget(LeveltextEdit);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        GridtextEdit = new QTextEdit(groupBox_2);
        GridtextEdit->setObjectName("GridtextEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GridtextEdit->sizePolicy().hasHeightForWidth());
        GridtextEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(GridtextEdit, 0, 0, 1, 7);

        pushButton_backspace = new QPushButton(groupBox_2);
        pushButton_backspace->setObjectName("pushButton_backspace");
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_backspace, 1, 0, 1, 2);

        pushButton_mc = new QPushButton(groupBox_2);
        pushButton_mc->setObjectName("pushButton_mc");
        sizePolicy.setHeightForWidth(pushButton_mc->sizePolicy().hasHeightForWidth());
        pushButton_mc->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_mc, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_divide = new QPushButton(groupBox_2);
        pushButton_divide->setObjectName("pushButton_divide");
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_divide, 2, 5, 1, 1);

        pushButton_sqrt = new QPushButton(groupBox_2);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
        sizePolicy.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_sqrt, 2, 6, 1, 1);

        pushButton_mr = new QPushButton(groupBox_2);
        pushButton_mr->setObjectName("pushButton_mr");
        sizePolicy.setHeightForWidth(pushButton_mr->sizePolicy().hasHeightForWidth());
        pushButton_mr->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_mr, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 3, 2, 1, 1);

        pushButton_multiply = new QPushButton(groupBox_2);
        pushButton_multiply->setObjectName("pushButton_multiply");
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_multiply, 3, 5, 1, 1);

        pushButton_square = new QPushButton(groupBox_2);
        pushButton_square->setObjectName("pushButton_square");
        sizePolicy.setHeightForWidth(pushButton_square->sizePolicy().hasHeightForWidth());
        pushButton_square->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_square, 3, 6, 1, 1);

        pushButton_ms = new QPushButton(groupBox_2);
        pushButton_ms->setObjectName("pushButton_ms");
        sizePolicy.setHeightForWidth(pushButton_ms->sizePolicy().hasHeightForWidth());
        pushButton_ms->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_ms, 4, 0, 1, 1);

        pushButton_1 = new QPushButton(groupBox_2);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_1, 4, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 4, 2, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 4, 3, 1, 2);

        pushButton_minus = new QPushButton(groupBox_2);
        pushButton_minus->setObjectName("pushButton_minus");
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_minus, 4, 5, 1, 1);

        pushButton_reciprocal = new QPushButton(groupBox_2);
        pushButton_reciprocal->setObjectName("pushButton_reciprocal");
        sizePolicy.setHeightForWidth(pushButton_reciprocal->sizePolicy().hasHeightForWidth());
        pushButton_reciprocal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_reciprocal, 4, 6, 1, 1);

        pushButton_mPlus = new QPushButton(groupBox_2);
        pushButton_mPlus->setObjectName("pushButton_mPlus");
        sizePolicy.setHeightForWidth(pushButton_mPlus->sizePolicy().hasHeightForWidth());
        pushButton_mPlus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_mPlus, 5, 0, 1, 1);

        pushButton_0 = new QPushButton(groupBox_2);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_point = new QPushButton(groupBox_2);
        pushButton_point->setObjectName("pushButton_point");
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_point, 5, 2, 1, 1);

        pushButton_sign = new QPushButton(groupBox_2);
        pushButton_sign->setObjectName("pushButton_sign");
        sizePolicy.setHeightForWidth(pushButton_sign->sizePolicy().hasHeightForWidth());
        pushButton_sign->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_sign, 5, 3, 1, 2);

        pushButton_plus = new QPushButton(groupBox_2);
        pushButton_plus->setObjectName("pushButton_plus");
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_plus, 5, 5, 1, 1);

        pushButton_equal = new QPushButton(groupBox_2);
        pushButton_equal->setObjectName("pushButton_equal");
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_equal, 5, 6, 1, 1);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 2, 2, 1, 1);

        pushButton_clearAll = new QPushButton(groupBox_2);
        pushButton_clearAll->setObjectName("pushButton_clearAll");
        sizePolicy.setHeightForWidth(pushButton_clearAll->sizePolicy().hasHeightForWidth());
        pushButton_clearAll->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_clearAll, 1, 5, 1, 2);

        pushButton_clear = new QPushButton(groupBox_2);
        pushButton_clear->setObjectName("pushButton_clear");
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_clear, 1, 2, 1, 3);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 3, 3, 1, 2);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 2, 3, 1, 2);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font);
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        namelabel = new QLabel(groupBox_3);
        namelabel->setObjectName("namelabel");
        sizePolicy.setHeightForWidth(namelabel->sizePolicy().hasHeightForWidth());
        namelabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, namelabel);

        namelineEdit = new QLineEdit(groupBox_3);
        namelineEdit->setObjectName("namelineEdit");
        sizePolicy.setHeightForWidth(namelineEdit->sizePolicy().hasHeightForWidth());
        namelineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, namelineEdit);

        emaillabel = new QLabel(groupBox_3);
        emaillabel->setObjectName("emaillabel");
        sizePolicy.setHeightForWidth(emaillabel->sizePolicy().hasHeightForWidth());
        emaillabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, emaillabel);

        emaillineEdit = new QLineEdit(groupBox_3);
        emaillineEdit->setObjectName("emaillineEdit");
        sizePolicy.setHeightForWidth(emaillineEdit->sizePolicy().hasHeightForWidth());
        emaillineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, emaillineEdit);

        positionlabel = new QLabel(groupBox_3);
        positionlabel->setObjectName("positionlabel");
        sizePolicy.setHeightForWidth(positionlabel->sizePolicy().hasHeightForWidth());
        positionlabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, positionlabel);

        positionComboBox = new QComboBox(groupBox_3);
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->addItem(QString());
        positionComboBox->setObjectName("positionComboBox");
        sizePolicy.setHeightForWidth(positionComboBox->sizePolicy().hasHeightForWidth());
        positionComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, positionComboBox);

        worklabel = new QLabel(groupBox_3);
        worklabel->setObjectName("worklabel");
        sizePolicy.setHeightForWidth(worklabel->sizePolicy().hasHeightForWidth());
        worklabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, worklabel);

        workSpinBox = new QSpinBox(groupBox_3);
        workSpinBox->setObjectName("workSpinBox");
        sizePolicy.setHeightForWidth(workSpinBox->sizePolicy().hasHeightForWidth());
        workSpinBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, workSpinBox);

        submitPushButton = new QPushButton(groupBox_3);
        submitPushButton->setObjectName("submitPushButton");
        sizePolicy.setHeightForWidth(submitPushButton->sizePolicy().hasHeightForWidth());
        submitPushButton->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, submitPushButton);


        gridLayout_2->addWidget(groupBox_3, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\260\264\345\271\263\345\270\203\345\261\200", nullptr));
        addPushButton->setText(QCoreApplication::translate("Widget", "\345\242\236\345\212\240\350\256\260\345\275\225", nullptr));
        delPushButton->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        modifyPushButton->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\350\256\260\345\275\225", nullptr));
        queryPushButton->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\240\205\346\240\274\345\270\203\345\261\200", nullptr));
        pushButton_backspace->setText(QCoreApplication::translate("Widget", "Backspace", nullptr));
        pushButton_mc->setText(QCoreApplication::translate("Widget", "MC", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("Widget", "Sqrt", nullptr));
        pushButton_mr->setText(QCoreApplication::translate("Widget", "MR", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("Widget", "x", nullptr));
        pushButton_square->setText(QCoreApplication::translate("Widget", "x\302\262", nullptr));
        pushButton_ms->setText(QCoreApplication::translate("Widget", "MS", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton_reciprocal->setText(QCoreApplication::translate("Widget", "1/x", nullptr));
        pushButton_mPlus->setText(QCoreApplication::translate("Widget", "M+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButton_point->setText(QCoreApplication::translate("Widget", ".", nullptr));
        pushButton_sign->setText(QCoreApplication::translate("Widget", "\302\261", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_clearAll->setText(QCoreApplication::translate("Widget", "Clear All", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\350\241\250\345\215\225\345\270\203\345\261\200", nullptr));
        namelabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        emaillabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\351\202\256\347\256\261</span></p></body></html>", nullptr));
        positionlabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\262\227\344\275\215</span></p></body></html>", nullptr));
        positionComboBox->setItemText(0, QCoreApplication::translate("Widget", "\345\274\200\345\217\221", nullptr));
        positionComboBox->setItemText(1, QCoreApplication::translate("Widget", "\350\277\220\347\273\264", nullptr));
        positionComboBox->setItemText(2, QCoreApplication::translate("Widget", "\351\224\200\345\224\256", nullptr));
        positionComboBox->setItemText(3, QCoreApplication::translate("Widget", "\346\265\213\350\257\225", nullptr));

        worklabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\267\245\344\275\234\347\273\217\351\252\214</span></p></body></html>", nullptr));
        submitPushButton->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
