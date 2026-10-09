#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("调色板");

    // 指定 slider 大小
    ui->sliderRed->setMaximum(255);
    ui->sliderGreen->setMaximum(255);
    ui->sliderBlue->setMaximum(255);
    ui->sliderAlpha->setMaximum(255);

    // 默认透明度
    ui->sliderAlpha->setValue(255);

    // 连接滑块信号
    connect(ui->sliderRed, &QSlider::valueChanged, this, &Widget::updateColor);
    connect(ui->sliderGreen, &QSlider::valueChanged, this, &Widget::updateColor);
    connect(ui->sliderBlue, &QSlider::valueChanged, this, &Widget::updateColor);
    connect(ui->sliderAlpha, &QSlider::valueChanged, this, &Widget::updateColor);

    updateColor();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updateColor()
{
    int r = ui->sliderRed->value();
    int g = ui->sliderGreen->value();
    int b = ui->sliderBlue->value();
    int a = ui->sliderAlpha->value();

    // 改变调色板颜色
    QString styleSheet = QString("background-color: rgba(%1, %2, %3, %4);").arg(r).arg(g).arg(b).arg(a);
    ui->colorLabel->setStyleSheet(styleSheet);

    // 更新显示
    QString text = QString("RGBA(%1, %2, %3, %4)").arg(r).arg(g).arg(b).arg(a);
    ui->rgbLabel->setText(text);
}