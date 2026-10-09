#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

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
    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_leftButton_clicked();

    void on_zeroButton_clicked();

    void on_rightButton_clicked();

    void on_equalButton_clicked();

    void on_plusButton_clicked();

    void on_minueButton_clicked();

    void on_mulButton_clicked();

    void on_divButton_clicked();

    void on_modButton_clicked();

    void on_clearButton_clicked();

    void on_delButton_clicked();

private:
    Ui::Widget *ui;
    QString expression;
};
#endif // WIDGET_H
