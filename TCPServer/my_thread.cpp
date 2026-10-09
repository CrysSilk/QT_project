#include "my_thread.h"

My_thread::My_thread(QTcpSocket* s)
{
    socket = s;
}

void My_thread::run()
{
    connect(socket, &QTcpSocket::readyRead, this, &My_thread::clientInfoSlot);
}

void My_thread::clientInfoSlot()
{
    // qDebug() << socket->readAll();
    QByteArray ba = socket->readAll();
    emit sendToWidget(ba);      // 发送信号
}