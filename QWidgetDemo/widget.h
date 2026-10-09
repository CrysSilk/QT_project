#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>

#include "colorform.h"

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
    // 1.内嵌窗口、独立窗口
    void on_BtnGroupAlignment_Clicked(int id);

    void on_Font_Changed(bool bold, bool italic, bool underline);

    void on_Color_Changed(int id);

    // 2.窗口位置和大小
    void on_getPushButton_clicked();

    void on_setPushButton_clicked();

    void on_movePushButton_clicked();

    // 3.设置窗口标题和图标
    void on_setTitlePushButton_clicked();

    void on_replacePushButton_clicked();

private:
    Ui::Widget *ui;

    QButtonGroup *btnGroupAlignment;

    ColorForm *colorFrom;
};
#endif // WIDGET_H
