#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 连接数据库
    db = QSqlDatabase::addDatabase("QODBC");        // 加载MYSQL数据库驱动
    QString dsn = QString("DRIVER={MySQL ODBC 26.7 Unicode Driver};"
                          "SERVER=localhost;"
                          "PORT=3306;"
                          "DATABASE=mydatabase;"
                          "USER=root;"
                          "PASSWORD=1206;"
                          "OPT=3;");
    db.setDatabaseName(dsn);

    if (db.open())
    {
        QMessageBox::information(this, "连接提示", "通过 ODBC 连接成功！");
    }
    else
    {
        qDebug() << "ODBC 连接失败原因:" << db.lastError().text();
        QMessageBox::warning(this, "连接提示", "连接失败");
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_insertPushButton_clicked()
{
    QString id = ui->IdlineEdit->text();
    QString name = ui->NamelineEdit->text();
    QString birth = ui->BirthlineEdit->text();

    QString sql = QString("insert into student values (%1, '%2', '%3');").arg(id).arg(name).arg(birth);
    QSqlQuery query;
    if (query.exec(sql))
    {
        QMessageBox::information(this, "插入提示", "插入成功！");
    }
    else
    {
        QMessageBox::warning(this, "插入提示", "插入失败");
    }
}


void Widget::on_findPushButton_clicked()
{
    QSqlQuery query;
    query.exec("select * from student;");
    while (query.next())
    {
        qDebug() << query.value(0);
        qDebug() << query.value(1);
        qDebug() << query.value(2);
    }
}

