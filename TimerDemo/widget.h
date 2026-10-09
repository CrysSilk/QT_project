#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#define TIMEOUT 1 * 1000

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
    virtual void timerEvent(QTimerEvent *event) override;
    ~Widget() override;

private slots:
    void on_startButton_clicked();

    void on_stopButton_clicked();

private:
    Ui::Widget *ui;
    int myTimerId;  // 定时器 Id
    int picId;  // 第 Id 张图片
};
#endif // WIDGET_H
