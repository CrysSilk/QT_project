#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 创建两个类的示例对象
    commander = new Commander(this);
    soldier1 = new Soldier(this);
    soldier2 = new Soldier(this);


    // 建立信号和槽的连接

    connect(ui->maxsizePushButton, &QPushButton::clicked, this, &QWidget::showMaximized);
    connect(ui->normalPushButton, &QPushButton::clicked, this, &QWidget::showNormal);
    connect(ui->minsizePushButton, &QPushButton::clicked, this, &QWidget::showMinimized);
    connect(ui->closePushButton, &QPushButton::clicked, this, &QWidget::close);


    connect(commander, qOverload<>(&Commander::go), soldier1, qOverload<>(&Soldier::fight));
    connect(commander, qOverload<QString>(&Commander::go), soldier2, qOverload<QString>(&Soldier::fight));
}

Widget::~Widget()
{
    delete ui;
}
