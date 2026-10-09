#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 1.下载
    downloadTimer = new QTimer(this);
    downloadTimer->setInterval(50);
    connect(downloadTimer, &QTimer::timeout, this, &Widget::onDownloadTimeout);

    // 2.拷贝
    copyTimer = new QTimer(this);
    copyTimer->setInterval(50);
    connect(copyTimer, &QTimer::timeout, this, &Widget::onCopyTimeout);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_downloadpushButton_clicked()
{
    ui->downloadpushButton->setEnabled(false);
    // 将进度条恢复到初始状态（清空进度） reset()不带参数 默认从 minimum - 1 开始
    ui->downloadProgressBar->reset();
    downloadTimer->start();
}


void Widget::on_copypushButton_clicked()
{
    ui->copypushButton->setEnabled(false);
    ui->copyprogressBar->reset();
    copyTimer->start();
}


void Widget::onDownloadTimeout()
{
    int currentValue = ui->downloadProgressBar->value();
    int maximum = ui->downloadProgressBar->maximum();

    if (currentValue >= maximum) {
        downloadTimer->stop();
        ui->downloadpushButton->setEnabled(true);
        QMessageBox::information(this, "提示", "文件下载完成~");
    } else {
        // qMin(value1, value2)获取两个值中的较小者
        ui->downloadProgressBar->setValue(qMin(currentValue + 3, maximum));
        qDebug() << ui->downloadProgressBar->value();
    }
}


void Widget::onCopyTimeout()
{
    int currentValue = ui->copyprogressBar->value();
    int maximum = ui->copyprogressBar->maximum();

    if (currentValue >= maximum) {
        copyTimer->stop();
        ui->copypushButton->setEnabled(true);
        QMessageBox::information(this, "提示", "文件拷贝完成~");
    } else {
        ui->copyprogressBar->setValue(qMin(currentValue + 10, maximum));
        qDebug() << ui->copyprogressBar->value();
    }
}
