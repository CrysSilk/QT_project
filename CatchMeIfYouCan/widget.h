#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    // 重写鼠标进入事件，让“拒绝”按钮逃跑
    bool eventFilter(QObject *watched, QEvent *event) override;

private slots:
    // 点击“拒绝”按钮时的槽函数（虽然很难点到，但万一点到了呢）
    void on_noButton_clicked();

    // 点击“同意”按钮时的槽函数
    void on_yesButton_clicked();

private:
    Ui::Widget *ui;
    int m_clickCount = 0; // 记录试图点击“不要”的次数
    void moveNoButton();  // 封装一个让按钮随机移动的函数
};

#endif // WIDGET_H