#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    void extracted();
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;

private:
    void connectGroup();

private slots:

    void on_contentLabel_linkActivated();

private:
    Ui::Widget *ui;

    QButtonGroup* genderGroup;
    QButtonGroup* EBGroup;
};
#endif // WIDGET_H
