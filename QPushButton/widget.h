#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;

private slots:
    // 启动
    void on_startpushButton_clicked();
    // 暂停
    void on_stoppushButton_clicked();
    // 上
    void on_uppushButton_clicked();
    // 左
    void on_leftpushButton_clicked();
    // 右
    void on_rightpushButton_clicked();
    // 下
    void on_downpushButton_clicked();
    // 复位
    void on_resetpushButton_clicked();

private:
    // 初始化文本、图标
    void initTextAndIcons();

    // 移动标签初始化
    void initMove();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
