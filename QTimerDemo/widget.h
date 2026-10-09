#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

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
    ~Widget() override;

private slots:
    void on_startButton_clicked();
    void timeoutSlot();

    void on_stopButton_clicked();

private:
    Ui::Widget *ui;
    QTimer *timer;
    int picId;
    int m_remainingTimes = 0; // 记录剩余执行次数
};
#endif // WIDGET_H
