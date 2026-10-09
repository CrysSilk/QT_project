#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 1.文本、图标初始化
    initTextAndIcons();

    // 2.移动标签初始化
    initMove();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::initTextAndIcons()
{
    // 定义一个 Lambda 表达式用于复用配置逻辑
    auto setupButton = [](QPushButton *btn, const QString &text, const QString &iconPath) {
        if (!btn) return;
        btn->setText(text);
        btn->setFont(QFont("黑体", 12));
        btn->setIcon(QIcon(iconPath));
        btn->setIconSize(QSize(20, 20));
    };

    // 简洁调用
    setupButton(ui->confirmpushButton, "确定", ":/res/ok.png");
    setupButton(ui->cancelpushButton,  "取消", ":/res/cancel.png");
    setupButton(ui->startpushButton,   "启动", ":/res/start.png");
    setupButton(ui->stoppushButton,    "停止", ":/res/stop.png");

    ui->startpushButton->setEnabled(true);
    ui->stoppushButton->setEnabled(false);
}

void Widget::initMove()
{
    auto setupButton = [](QPushButton *btn, const QString &normalPath, const QString &hoverPath, const QString &pressedPath, const Qt::Key &key) {
        if (!btn) return;
        QString style = QString(R"(
            QPushButton {
                border-image: url(%1);
            }
            QPushButton:hover {
                border-image: url(%2);
            }
            QPushButton:pressed {
                border-image: url(%3);
            }
        )").arg(normalPath, hoverPath, pressedPath);

        btn->setStyleSheet(style);

        // 设置长按功能
        btn->setAutoRepeat(true);

        // 设置快捷键
        btn->setShortcut(QKeySequence(key));
    };

    setupButton(ui->uppushButton,      ":/res/up_normal.png",    ":/res/up_hover.png",    ":/res/up_pressed.png",    Qt::Key_Up);
    setupButton(ui->downpushButton,    ":/res/down_normal.png",  ":/res/down_hover.png",  ":/res/down_pressed.png",  Qt::Key_Down);
    setupButton(ui->leftpushButton,    ":/res/left_normal.png",  ":/res/left_hover.png",  ":/res/left_pressed.png",  Qt::Key_Left);
    setupButton(ui->rightpushButton,   ":/res/right_normal.png", ":/res/right_hover.png", ":/res/right_pressed.png", Qt::Key_Right);
    setupButton(ui->resetpushButton,   ":/res/reset_normal.png", ":/res/reset_hover.png", ":/res/reset_pressed.png", Qt::Key_Home);
}

void Widget::on_startpushButton_clicked()
{
    ui->startpushButton->setEnabled(false);
    ui->stoppushButton->setEnabled(true);
}


void Widget::on_stoppushButton_clicked()
{
    ui->startpushButton->setEnabled(true);
    ui->stoppushButton->setEnabled(false);
}


void Widget::on_uppushButton_clicked()
{
    ui->squarelabel->move(ui->squarelabel->x(), ui->squarelabel->y() - 20);
    if (ui->squarelabel->y() + ui->squarelabel->height() <= 0)
    {
        ui->squarelabel->move(ui->squarelabel->x(), ui->squarelabel->parentWidget()->height());
    }
}


void Widget::on_leftpushButton_clicked()
{
    ui->squarelabel->move(ui->squarelabel->x() - 20, ui->squarelabel->y());
    if (ui->squarelabel->x() + ui->squarelabel->width() <= 0)
    {
        ui->squarelabel->move(ui->squarelabel->parentWidget()->width(), ui->squarelabel->y());
    }
}


void Widget::on_rightpushButton_clicked()
{
    ui->squarelabel->move(ui->squarelabel->x() + 20, ui->squarelabel->y());
    if (ui->squarelabel->x() >= ui->squarelabel->parentWidget()->width())
    {
        ui->squarelabel->move(-1 * ui->squarelabel->width(), ui->squarelabel->y());
    }
}


void Widget::on_downpushButton_clicked()
{
    ui->squarelabel->move(ui->squarelabel->x(), ui->squarelabel->y() + 20);
    if (ui->squarelabel->y() >= ui->squarelabel->parentWidget()->height())
    {
        ui->squarelabel->move(ui->squarelabel->x(), -1 * ui->squarelabel->height());
    }

}


void Widget::on_resetpushButton_clicked()
{
    // 获取父控件的大小
    QWidget* widget = ui->squarelabel->parentWidget();

    QRect parentRect = widget->rect();
    QRect lblRect = ui->squarelabel->rect();

    // 计算自控件应该位于父控件中心的位置
    int x = parentRect.center().rx() - lblRect.width() / 2;
    int y = parentRect.center().ry() - lblRect.height() / 2;

    ui->squarelabel->move(x, y);
}

