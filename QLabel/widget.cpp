#include "widget.h"
#include "ui_widget.h"

#include <QDateTime>
#include <QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 1.对齐和字体设置
    // 对齐
    btnGroupAlignment = new QButtonGroup(this);
    btnGroupAlignment->addButton(ui->radioButton_left, 0);
    btnGroupAlignment->addButton(ui->radioButton_center, 1);
    btnGroupAlignment->addButton(ui->radioButton_right, 2);

    connect(btnGroupAlignment, &QButtonGroup::idClicked, this, &Widget::onBtnGroupAlignmentClicked);
    ui->radioButton_center->click();

    // 字体
    connect(ui->checkBox_bold, &QCheckBox::clicked, this, &Widget::onChkFontClicked);
    connect(ui->checkBox_italic, &QCheckBox::clicked, this, &Widget::onChkFontClicked);
    connect(ui->checkBox_underline, &QCheckBox::clicked, this, &Widget::onChkFontClicked);

    // 定时器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::onTimeout);
    timer->start(500);  // ms

    // 2.文本换行
    ui->breakLabel->setWordWrap(true);
    ui->breakLabel->setText("哒哒哒哒哒，好想玩原神，云原神当当当当当，看精彩纷纷，云原神呜呜呜呜呜，"
                            "好想玩原神，云原神空间快爆炸，好想玩原神，云原神进度软趴趴，好想玩原神，"
                            "云原神潜入了深海，也想玩原神朋友已就位，一起玩原神啊啊啊啊啊，好想玩原神，云原神");

    // 3.加载静态图片
    loadStaticPixmap();

    // 4.加载动态图片
    loadGifMovies();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onBtnGroupAlignmentClicked(int id)
{
    switch (id) {
    case 0:
        ui->fontLabel->setAlignment(Qt::AlignLeft);
        break;
    case 1:
        ui->fontLabel->setAlignment(Qt::AlignCenter);
        break;
    case 2:
        ui->fontLabel->setAlignment(Qt::AlignRight);
        break;
    default:
        break;
    }
}

void Widget::onChkFontClicked(bool checked)
{
    // 获取字体样式
    QFont font = ui->fontLabel->font();

    font.setBold(ui->checkBox_bold->isChecked());
    font.setItalic(ui->checkBox_italic->isChecked());
    font.setUnderline(ui->checkBox_underline->isChecked());

    ui->fontLabel->setFont(font);
}

void Widget::onTimeout()
{
    // 获取当前时间
    QDateTime currentTime = QDateTime::currentDateTime();

    // 将当前时间转换成字符串
    QString timeString = currentTime.toString("yyyy-MM-dd hh:mm:ss");

    // 显示
    ui->fontLabel->setText(timeString);
}

void Widget::loadStaticPixmap()
{
    auto setPixmap = [&](const QString& path, QLabel* pic) {
        QPixmap px;
        if (!px.load(path)) return;
        QPixmap scaledPx = px.scaled(pic->size(),
                                     Qt::KeepAspectRatio,
                                     Qt::TransformationMode::SmoothTransformation);
        pic->setPixmap(scaledPx);
        pic->setAlignment(Qt::AlignCenter); // 居中显示
    };

    setPixmap(":/res/apple.png", ui->label_pic1);
    setPixmap(":/res/orange.png", ui->label_pic2);
    setPixmap(":/res/strawberry.png", ui->label_pic3);
    setPixmap(":/res/watermelon.png", ui->label_pic4);
}

void Widget::loadGifMovies()
{
    auto setupMovie = [](const QString& path, QLabel* label, QWidget* parent) {
        QMovie* movie = new QMovie(path, "", parent);
        label->setMovie(movie);
        movie->start();
    };

    setupMovie(":/res/gif1.gif", ui->label_gif1, this);
    setupMovie(":/res/gif2.gif", ui->label_gif2, this);
    setupMovie(":/res/gif3.gif", ui->label_gif3, this);
    setupMovie(":/res/gif4.gif", ui->label_gif4, this);
}

void Widget::on_disableWrappushButton_clicked()
{
    ui->breakLabel->setWordWrap(false);
}


void Widget::on_EnableWrappushButton_clicked()
{
    ui->breakLabel->setWordWrap(true);
}

