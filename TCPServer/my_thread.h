#ifndef MY_THREAD_H
#define MY_THREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class My_thread : public QThread
{
    Q_OBJECT

public:
    explicit My_thread(QTcpSocket* s);
    void run() override;

signals:
    void sendToWidget(QByteArray b);

public slots:
    void clientInfoSlot();

private:
    QTcpSocket* socket;
};

#endif // MY_THREAD_H