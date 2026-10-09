#include "widget.h"
#include "ui_widget.h"

#include "fontform.h"
#include "colorform.h"

QStringList icons = {":/images/lcon1.jpg", ":/images/lcon2.jpg", ":/images/lcon3.jpg", ":/images/lcon4.jpg"};

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 1.内嵌窗口、独立窗口
    // 对齐设置
    ui->timelineEdit->setText("2026-03-14 12:00:20");

    btnGroupAlignment = new QButtonGroup(this);
    btnGroupAlignment->addButton(ui->leftAlignradioButton, 0);
    btnGroupAlignment->addButton(ui->centerAlignradioButton, 1);
    btnGroupAlignment->addButton(ui->rightAlignradioButton, 2);

    connect(btnGroupAlignment, &QButtonGroup::idClicked, this, &Widget::on_BtnGroupAlignment_Clicked);
    ui->centerAlignradioButton->click();


    // 字体设置
    FontForm *fontForm = new FontForm();
    ui->setWidget->layout()->addWidget(fontForm);
    fontForm->setWindowTitle("字体设置");

    connect(fontForm, &FontForm::fontChanged, this, &Widget::on_Font_Changed);

    // 颜色设置
    QPushButton *btnColor = new QPushButton("颜色设置");
    btnColor->setStyleSheet("QPushButton { font-size: 14px; ");
    ui->setWidget->layout()->addWidget(btnColor);
    connect(btnColor, &QPushButton::clicked, this, [=]() {
        colorFrom->show();
    });

    colorFrom = new  ColorForm();
    colorFrom->setWindowTitle("颜色设置");
    colorFrom->setFixedHeight(250);
    colorFrom->setFixedWidth(250);
    connect(colorFrom, &ColorForm::colorChanged, this, &Widget::on_Color_Changed);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_BtnGroupAlignment_Clicked(int id)
{
    switch (id) {
    case 0:
        ui->timelineEdit->setAlignment(Qt::AlignLeft);
        break;
    case 1:
        ui->timelineEdit->setAlignment(Qt::AlignCenter);
        break;
    case 2:
        ui->timelineEdit->setAlignment(Qt::AlignRight);
    default:
        break;
    }
}

void Widget::on_Font_Changed(bool bold, bool italic, bool underline)
{
    QFont font = ui->timelineEdit->font();
    font.setBold(bold);
    font.setItalic(italic);
    font.setUnderline(underline);
    ui->timelineEdit->setFont(font);
}

void Widget::on_Color_Changed(int id)
{
    switch (id) {
    case 0:
        ui->timelineEdit->setStyleSheet("QLineEdit { color: red };");
        break;
    case 1:
        ui->timelineEdit->setStyleSheet("QLineEdit { color: green };");
        break;
    case 2:
        ui->timelineEdit->setStyleSheet("QLineEdit { color: blue };");
        break;
    default:
        break;
    }
}

void Widget::on_getPushButton_clicked()
{
    QRect rect = this->geometry();
    QPoint topLeft = rect.topLeft();
    int width = rect.width();
    int height = rect.height();
    QString s = QString("左上角(%1, %2), 宽高(%3*%4)")
                    .arg(topLeft.x())
                    .arg(topLeft.y())
                    .arg(width)
                    .arg(height);
    ui->position_size_lineEdit->setText(s);
}


void Widget::on_setPushButton_clicked()
{
    this->resize(520, 520);
}


void Widget::on_movePushButton_clicked()
{
    this->move(1314, 520);
}


void Widget::on_setTitlePushButton_clicked()
{
    this->setWindowTitle(ui->titlelineEdit->text().trimmed());
}


void Widget::on_replacePushButton_clicked()
{
    static int index = 0;
    this->setWindowIcon(QIcon(icons[index++ % 4]));
}

