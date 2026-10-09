#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>

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
    void on_cnacelButton_clicked();

    void on_connectButton_clicked();

    void on_sendButton_clicked();

    void on_sdrButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *socket;
};
#endif // WIDGET_H
