#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    auto updateState = [=]() {
        bool hasBin = !ui->BinaryEdit->toPlainText().isEmpty();
        bool hasOct = !ui->OctalEdit->toPlainText().isEmpty();
        bool hasDec = !ui->DecimalEdit->toPlainText().isEmpty();
        bool hasHex = !ui->hexadecimalEdit->toPlainText().isEmpty();

        if (!hasBin && !hasOct && !hasDec && !hasHex) {
            ui->BinaryEdit->setEnabled(true);
            ui->OctalEdit->setEnabled(true);
            ui->DecimalEdit->setEnabled(true);
            ui->hexadecimalEdit->setEnabled(true);
            return;
        }

        ui->BinaryEdit->setEnabled(hasBin);
        ui->OctalEdit->setEnabled(hasOct);
        ui->DecimalEdit->setEnabled(hasDec);
        ui->hexadecimalEdit->setEnabled(hasHex);
    };

    connect(ui->BinaryEdit, &QPlainTextEdit::textChanged, this, updateState);
    connect(ui->OctalEdit, &QPlainTextEdit::textChanged, this, updateState);
    connect(ui->DecimalEdit, &QPlainTextEdit::textChanged, this, updateState);
    connect(ui->hexadecimalEdit, &QPlainTextEdit::textChanged, this, updateState);

    connect(ui->conversionButton, &QPushButton::clicked, this, &Widget::on_conversion_clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_clearButton_clicked()
{
    ui->BinaryEdit->clear();
    ui->DecimalEdit->clear();
    ui->hexadecimalEdit->clear();
    ui->OctalEdit->clear();

    ui->BinaryEdit->setEnabled(true);
    ui->DecimalEdit->setEnabled(true);
    ui->hexadecimalEdit->setEnabled(true);
    ui->OctalEdit->setEnabled(true);
}

void Widget::on_conversion_clicked()
{
    long long decimalValue = 0;
    bool ok = false;

    if (!ui->BinaryEdit->toPlainText().isEmpty()) {
        QString str = ui->BinaryEdit->toPlainText().trimmed();
        decimalValue = str.toLongLong(&ok, 2); // 二进制转十进制
        if (!ok) { QMessageBox::warning(this, "错误", "包含非法的二进制字符（仅限0和1）！"); return; }
    }
    else if (!ui->OctalEdit->toPlainText().isEmpty()) {
        QString str = ui->OctalEdit->toPlainText().trimmed();
        decimalValue = str.toLongLong(&ok, 8); // 八进制转十进制
        if (!ok) { QMessageBox::warning(this, "错误", "包含非法的八进制字符（仅限0-7）！"); return; }
    }
    else if (!ui->DecimalEdit->toPlainText().isEmpty()) {
        QString str = ui->DecimalEdit->toPlainText().trimmed();
        decimalValue = str.toLongLong(&ok, 10); // 十进制转十进制
        if (!ok) { QMessageBox::warning(this, "错误", "包含非法的十进制数字！"); return; }
    }
    else if (!ui->hexadecimalEdit->toPlainText().isEmpty()) {
        QString str = ui->hexadecimalEdit->toPlainText().trimmed();
        decimalValue = str.toLongLong(&ok, 16); // 十六进制转十进制
        if (!ok) { QMessageBox::warning(this, "错误", "包含非法的十六进制字符（0-9, A-F）！"); return; }
    }
    else {
        QMessageBox::information(this, "提醒", "请先在任意一个输入框中输入文本！");
        return;
    }

    ui->BinaryEdit->setPlainText(QString::number(decimalValue, 2));
    ui->OctalEdit->setPlainText(QString::number(decimalValue, 8));
    ui->DecimalEdit->setPlainText(QString::number(decimalValue, 10));
    ui->hexadecimalEdit->setPlainText(QString::number(decimalValue, 16).toUpper());
}
