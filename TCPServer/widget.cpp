#include "widget.h"
#include "ui_widget.h"
#include "my_thread.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4, PORT);

    // 客户端发起信号
    connect(server, &QTcpServer::newConnection, this, [this]() {
        // 建立TCP连接
        QTcpSocket *socket = server->nextPendingConnection();
        // 获取客户端地址
        ui->IPTextEdit->setPlainText(socket->peerAddress().toString());
        // 获取客户端端口号
        ui->PortTextEdit->setPlainText(QString::number(socket->peerPort()));

        // 启动线程
        My_thread* thread = new My_thread(socket);      // 创建线程对象
        thread->start();                                // 开始线程
        connect(thread, &My_thread::sendToWidget, this, &Widget::threadSlot);
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::threadSlot(QByteArray b)
{
    ui->plainTextEdit->setPlainText(QString(b));
}