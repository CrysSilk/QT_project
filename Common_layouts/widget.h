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

protected:
    // 重写事件处理函数 用于响应窗口或控件的大小变化
    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
