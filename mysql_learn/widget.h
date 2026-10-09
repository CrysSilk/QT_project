#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

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
    void on_insertPushButton_clicked();

    void on_findPushButton_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
};
#endif // WIDGET_H
