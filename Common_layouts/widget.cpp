#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    static int index = 1;

    int lineCnt = ui->LeveltextEdit->document()->lineCount();
    if (lineCnt > 100 * 6)
    {
        ui->LeveltextEdit->clear();
        index = 1;
    }

    // 索引
    QString strIndex = QString("[%1]--------------").arg(index++);

    // 按钮宽度
    QString width = QString("按钮宽度: \t%1, %2, %3, %4")
                        .arg(ui->addPushButton->width())
                        .arg(ui->delPushButton->width())
                        .arg(ui->modifyPushButton->width())
                        .arg(ui->queryPushButton->width());

    // 边距
    QMargins margins = ui->widget->layout()->contentsMargins();
    QString strMargins = QString("边距(左上右下):\t%1, %2, %3, %4")
                             .arg(margins.left())
                             .arg(margins.top())
                             .arg(margins.right())
                             .arg(margins.bottom());

    // 间距
    int spacing = ui->widget->layout()->spacing();
    QString strSpacing = QString("间距:\t%1").arg(spacing);

    // 将这行带编号的索引内容追加到文本框的末尾
    ui->LeveltextEdit->append(strIndex);
    ui->LeveltextEdit->append(width);
    ui->LeveltextEdit->append(strMargins);
    ui->LeveltextEdit->append(strSpacing);

    // 移动光标到最后一行
    ui->LeveltextEdit->moveCursor(QTextCursor::End);
}