#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 性别和学历分组
    genderGroup = new QButtonGroup(this);
    EBGroup = new QButtonGroup(this);

    genderGroup->addButton(ui->femaleradioButton, 0);
    genderGroup->addButton(ui->maleradioButton, 1);

    EBGroup->addButton(ui->otherradioButton, 0);
    EBGroup->addButton(ui->undergraduateradioButton, 1);
    EBGroup->addButton(ui->masterradioButton, 2);
    EBGroup->addButton(ui->doctorradioButton, 3);

    // 连接信号
    connectGroup();

    // 默认选项
    ui->maleradioButton->click();
    ui->doctorradioButton->click();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::connectGroup()
{
    // 性别分组点击事件：通过 id 区分 (0: 女, 1: 男)
    connect(genderGroup, QOverload<int>::of(&QButtonGroup::idClicked), this, [=](int id){
        qDebug() << "性别选择变化，ID为：" << id;
        on_contentLabel_linkActivated();
    });

    // 学历分组点击事件：通过 id 区分 (0: 其他, 1: 本科, 2: 硕士, 3: 博士)
    connect(EBGroup, QOverload<int>::of(&QButtonGroup::idClicked), this, [=](int id){
        qDebug() << "学历选择变化，ID为：" << id;
        on_contentLabel_linkActivated();
    });
}
void Widget::on_contentLabel_linkActivated()
{
    QString str;

    switch (genderGroup->checkedId()) {
        case 0:
            str += "女";
            break;
        case 1:
            str += "男";
            break;
        default:
            break;
    }

    switch (EBGroup->checkedId()) {
        case 0:
            str += "其他";
            break;
        case 1:
            str += "本科";
            break;
        case 2:
            str += "硕士";
            break;
        case 3:
            str += "博士";
            break;
        default:
            break;
    }

    ui->contentLabel->setText(str);
}

