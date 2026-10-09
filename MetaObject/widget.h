#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "person.h"

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
    // 自定义槽函数
    void on_ageChange(int val);

    void on_spinvalChange(int val);

    // UI 界面槽函数
    void on_clearButton_clicked();

    void on_showButton_clicked();

    void on_GirlButton_clicked();

    void on_BoyButton_clicked();

private:
    Ui::Widget *ui;

    person *m_boy;
    person *m_girl;
};
#endif // WIDGET_H
