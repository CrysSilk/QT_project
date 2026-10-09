#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pix("D:/Code_Tool/QT_project/learn_01/images/lcon.bmp");

    ui->lconLabel->setPixmap(pix);

    ui->lconLabel->setScaledContents(true);

    // 连接信号与槽 参数: 谁发出信号, 发出什么信号, 谁处理信号, 怎么处理
    connect(ui->cmdLineEdit, SIGNAL(returnPressed()), this, SLOT(on_commitButton_clicked()));

    connect(ui->concelButton, &QPushButton::clicked, this, &Widget::on_concelButton_clicked);

    connect(ui->browseButton, &QPushButton::clicked, [this]{
        QMessageBox::information(this, "信息", "点击浏览");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_commitButton_clicked()
{
    // 获取lineedit
    QString program = ui->cmdLineEdit->text();
    // 创建 process 对象
    QProcess *myProcess = new QProcess(this);
    myProcess->start("cmd.exe", QStringList() << "/c" << program);
}

void Widget::on_concelButton_clicked()
{
    this->close();
}

