#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->timesBox->setStyleSheet(
        "QSpinBox::up-button { subcontrol-origin: border; subcontrol-position: top right; width: 20px; }"
        "QSpinBox::down-button { subcontrol-origin: border; subcontrol-position: bottom right; width: 20px; }"
    );

    timer = new QTimer;
    picId = 2;

    // 加载图像
    QImage img;
    img.load("D:/Code_Tool/QT_project/images/1.png");
    ui->label->setPixmap(QPixmap::fromImage(img));

    // 定时器完成指定时间区间 TIMEOUT 发出SIGNAL
    connect(timer, &QTimer::timeout, this, &Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    // 获取 times
    m_remainingTimes = ui->timesBox->value();

    if (m_remainingTimes <= 0) {
        QMessageBox::warning(this, tr("错误"), tr("请输入大于 0 的有效次数！"));
        return;
    }

    timer->start(TIMEOUT);
}

void Widget::timeoutSlot()
{
    QString path("D:/Code_Tool/QT_project/images/");
    path += QString::number(picId);
    path += ".png";

    QImage img;
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));

    m_remainingTimes--;
    if (m_remainingTimes <= 0) {
        timer->stop();      // 次数用完 停止定时器
    }

    if (++picId == 6)
        picId = 1;
}
void Widget::on_stopButton_clicked()
{
    timer->stop();
}
