#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("计时器");
    picId = 2;

    QPixmap pix("D:/Code_Tool/QT_project/images/1.png");
    QPixmap scaledPixmap = pix.scaled(400, 560, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    // 开启定时器 返回定时器的编号
    myTimerId = this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if (event->timerId() != myTimerId)
        return;

    QString path("D:/Code_Tool/QT_project/images/");
    path += QString::number(picId);
    path += ".png";

    QPixmap pix(path);
    QPixmap scaledPixmap = pix.scaled(400, 560, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label->setPixmap(pix);

    if (++picId == 6)
        picId = 1;
}
void Widget::on_stopButton_clicked()
{
    this->killTimer(myTimerId);
}

