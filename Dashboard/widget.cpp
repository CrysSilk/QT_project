#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->dial->setNotchesVisible(true);
    ui->dial->setNotchTarget(3.7);

    connect(ui->dial, &QDial::valueChanged, this, [=](int value) {
        if (ui->DecimalRadioButton->isChecked()) {
            ui->lcdNumber->setMode(QLCDNumber::Dec);
        } else if (ui->OctalRadioButton->isChecked()) {
            ui->lcdNumber->setMode(QLCDNumber::Oct);
        } else if (ui->HexadecimalRadioButton->isChecked()) {
            ui->lcdNumber->setMode(QLCDNumber::Hex);
        } else if (ui->BinaryRadioButton->isChecked()) {
            ui->lcdNumber->setMode(QLCDNumber::Bin);
        }

        // 显示当前数值
        ui->lcdNumber->display(value);
    });
}

Widget::~Widget()
{
    delete ui;
}
