#include "widget.h"
#include "ui_widget.h"

#include <QJSEngine> // 用于计算表达式

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setMaximumSize(300, 420);
    this->setMinimumSize(300, 420);

    this->setWindowTitle("计算器");

    QFont font("微软雅黑", 18);  // 字体对象
    ui->mainLineEdit->setFont(font);

    // 按钮放置图片
    QIcon icon("D:/Code_Tool/QT_project/learn_calculator/images.bmp");
    ui->delButton->setIconSize(QSize(40, 40));
    ui->delButton->setIcon(icon);

    // 鼠标悬停时背景色变浅蓝，文字变深色
    this->setStyleSheet("QPushButton:hover { background-color: #a0c4ff; color: #000000; }");
    // 仅对 objectName 为 delButton clearButton 的按钮生效
    ui->delButton->setStyleSheet("QPushButton#delButton:hover { background-color: #ffadad; }");
    ui->clearButton->setStyleSheet("QPushButton#clearButton:hover { background-color: #ffadad; }");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_oneButton_clicked()
{
    expression += "1";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_twoButton_clicked()
{
    expression += "2";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_threeButton_clicked()
{
    expression += "3";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_fourButton_clicked()
{
    expression += "4";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_fiveButton_clicked()
{
    expression += "5";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_sixButton_clicked()
{
    expression += "6";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_sevenButton_clicked()
{
    expression += "7";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_eightButton_clicked()
{
    expression += "8";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_nineButton_clicked()
{
    expression += "9";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_leftButton_clicked()
{
    expression += "(";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_zeroButton_clicked()
{
    expression += "0";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_rightButton_clicked()
{
    expression += ")";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_plusButton_clicked()
{
    expression += "+";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_minueButton_clicked()
{
    expression += "-";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_mulButton_clicked()
{
    expression += "*";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_divButton_clicked()
{
    expression += "/";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_modButton_clicked()
{
    expression += "%";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_clearButton_clicked()
{
    expression.clear();
    ui->mainLineEdit->clear();
}


void Widget::on_delButton_clicked()
{
    expression.chop(1);
    ui->mainLineEdit->setText(expression);
}

void Widget::on_equalButton_clicked()
{
    // 1. 创建一个轻量级的 JS 引擎来计算字符串表达式
    QJSEngine engine;

    // 2. 让引擎计算 expression 里的内容
    QJSValue result = engine.evaluate(expression);

    // 3. 检查计算结果是否合法（有没有语法错误等）
    if (result.isError()) {
        ui->mainLineEdit->setText("Error");
        expression.clear();
    } else {
        // 4. 将计算结果转换为字符串，显示到输入框中
        expression = result.toString();
        ui->mainLineEdit->setText(expression);
    }
}

