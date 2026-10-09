#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("DateTime");
}

Widget::~Widget()
{
    delete ui;
}

// 获取当前日期和时间 该日期和时间在对应的 LineEdit 显示
void Widget::on_pushButton_clicked()
{
    QDateTime currDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(currDateTime.time());
    ui->timePlainTextEdit->setPlainText(currDateTime.toString("hh:mm:ss:zzz"));
    ui->dateEdit->setDate(currDateTime.date());
    ui->datePlainTextEdit->setPlainText(currDateTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(currDateTime);
    ui->datetimePlainEdit->setPlainText(currDateTime.toString("yyyy-MM-dd hh:mm:ss:zzz"));
}


void Widget::on_calendarWidget_clicked(const QDate &date)
{
    ui->calendarPlainTextEdit->setPlainText(date.toString("yyyy年MM月dd日"));
}

