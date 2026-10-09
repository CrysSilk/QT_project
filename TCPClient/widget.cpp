#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    socket = new QTcpSocket;    // 创建 socket 对象
    this->setWindowTitle("MyClient");

    // 将 plainTextEdit 设置为只读
    ui->plainTextEdit->setReadOnly(true);

    connect(socket, &QTcpSocket::readyRead, [this]() {
        // 读取缓冲区的所以数据
        QByteArray buffe = socket->readAll();

        QString text = QString::fromUtf8(buffe);

        // 将数据显示至文本显示框
        ui->plainTextEdit->appendPlainText(text);
    });

    // 判断与服务器的连接
    connect(socket, &QTcpSocket::connected, [this]() {
        QMessageBox::information(this, "连接提示", "连接服务器成功!");
    });

    // 服务器连接失败/断开
    connect(socket, &QTcpSocket::disconnected, [this]() {
        QMessageBox::information(this, "警告", "连接异常 网络断开...");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cnacelButton_clicked()
{
    socket->disconnectFromHost();
}


void Widget::on_connectButton_clicked()
{
    // 获取IP地址和port端口号
    QString IP = ui->IPlineEdit->text();
    QString PortStr = ui->PortlineEdit->text();

    if (IP.isEmpty())
    {
        QMessageBox::information(this, "提醒", "IP为空!");
        return;
    }

    // 效验地址格式
    QHostAddress address;
    if (!address.setAddress(IP))
    {
        QMessageBox::warning(this, "警告", "IP地址格式不正确,请重新输入!");
        return;
    }

    if (PortStr.isEmpty())
    {
        QMessageBox::information(this, "提醒", "Port为空!");
        return;
    }

    // 效验端口格式
    bool ok = false;
    quint16 port = PortStr.toUShort(&ok);   // 尝试转换成无符号短整型

    if (!ok || port == 0)
    {
        QMessageBox::warning(this, "警告", "端口号格式不正确或超出范围(1-65535)!");
        return;
    }

    // 连接服务器
    socket->connectToHost(address, port);
}

void Widget::on_sendButton_clicked()
{
    // 获取输入框的文本
    QString message = ui->textEdit->toPlainText();

    // 将 QString 转码 UTF-8
    QByteArray data = message.toUtf8();

    // 调用 write 函数发送数据
    socket->write(data);
}

void Widget::on_sdrButton_clicked()
{
    ui->textEdit->clear();
}

void Widget::on_clearButton_clicked()
{
    ui->plainTextEdit->clear();
}

