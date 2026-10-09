#include "widget.h"
#include "ui_widget.h"
#include <QRandomGenerator>
#include <QMessageBox>
#include <QEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置窗口固定大小，防止放大窗口导致按钮好抓
    this->setFixedSize(600, 400);
    this->setWindowTitle("CatchMeIfYouCan - 专属小互动");

    // 为“不要”按钮安装事件过滤器，捕捉鼠标靠近动作
    ui->noButton->installEventFilter(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::moveNoButton()
{
    // 获取当前窗口的宽高，减去按钮本身的宽高，防止移出边界
    int maxX = this->width() - ui->noButton->width() - 20;
    int maxY = this->height() - ui->noButton->height() - 20;
    int minX = 20;
    int minY = 60; // 留出顶部给文字标签

    // 生成随机坐标
    int randomX = QRandomGenerator::global()->bounded(minX, maxX);
    int randomY = QRandomGenerator::global()->bounded(minY, maxY);

    // 移动按钮
    ui->noButton->move(randomX, randomY);
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->noButton && event->type() == QEvent::Enter) {
        moveNoButton(); // 鼠标一靠近就瞬移
        return true;
    }
    return QWidget::eventFilter(watched, event);
}

void Widget::on_noButton_clicked()
{
    m_clickCount++; // 次数加 1

    // 根据点击次数改变按钮文字，增加趣味性
    if (m_clickCount == 1) {
        ui->noButton->setText("就在？");
    } else if (m_clickCount == 3) {
        ui->noButton->setText("菜就多练");
    } else if (m_clickCount >= 5) {
        ui->noButton->setText("招笑");
    }

    moveNoButton();
}

void Widget::on_yesButton_clicked()
{
    if (m_clickCount == 0)
    {
        QMessageBox::information(this, "成功啦", "你还是弱智！嘻嘻嘻");
        return;
    }
    QString msg = QString("666 尝试了%1次 你挺牛 不过依旧弱智").arg(m_clickCount);
    QMessageBox::information(this, "成功啦", msg);
    this->close();
}