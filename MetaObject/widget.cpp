#include "widget.h"
#include "ui_widget.h"
#include <QMetaProperty>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle(QObject::tr("元对象MetaObject和(含动态)属性Propert的用法"));

    m_boy = new person("张三");
    m_boy->setProperty("score", 90);
    m_boy->setProperty("age", 20);
    m_boy->setProperty("sex", "Boy");           //动态属性
    connect(m_boy, &person::ageChanged, this, &Widget::on_ageChange);

    m_girl = new person("张丽");
    m_girl->setProperty("score", 80);
    m_girl->setProperty("age", 10);
    m_girl->setProperty("sex", "Gril");         //动态属性
    connect(m_girl, &person::ageChanged, this, &Widget::on_ageChange);

    ui->BoyAgeSpinBox->setProperty("isBoy", true);    //动态属性
    ui->GirlAgeSpinBox->setProperty("isBoy", false);

    connect(ui->BoyAgeSpinBox, SIGNAL(valueChanged(int)), this, SLOT(on_spinvalChange(int)));
    connect(ui->GirlAgeSpinBox, SIGNAL(valueChanged(int)), this, SLOT(on_spinvalChange(int)));

    connect(ui->BoyButton, SIGNAL(clicked), this, SLOT(on_BoyButton_clicked()));
    connect(ui->GirlButton, SIGNAL(clicked), this, SLOT(on_GirlButton_clicked()));
    connect(ui->showButton, SIGNAL(clicked), this, SLOT(on_showButton_clicked()));
    connect(ui->clearButton, SIGNAL(clicked), this, SLOT(on_clearButton_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ageChange(int val)
{
    Q_UNUSED(val);

    person* p = qobject_cast<person *>(sender());
    QString name = p->property("name").toString();
    QString sex = p->property("sex").toString();
    int age = p->getAge();

    ui->lineEdit->textEdited(name+","+sex + QString::asprintf(",年龄=%d",age));
}

void Widget::on_clearButton_clicked()
{
    ui->lineEdit->clear();
}


void Widget::on_showButton_clicked()
{
    const QMetaObject* meta = m_boy->metaObject();

    ui->lineEdit->clear();
    ui->lineEdit->textEdited("==元对象信息(Meta Object)===");
    ui->lineEdit->textEdited(QString("类名称: %1\n").arg(meta->className()));
    ui->lineEdit->textEdited("属性(property)");

    for (int i = meta->propertyOffset(); i < meta->propertyCount(); i++)
    {
        QMetaProperty prop = meta->property(i);
        const char* propName = prop.name();
        QString propValue = m_boy->property(propName).toString();
        ui->lineEdit->textEdited(QString("属性名称=%1， 属性值= %2").arg(propName).arg(propValue));
    }

    ui->lineEdit->textEdited("");
    ui->lineEdit->textEdited("classInfo:");
    for (int i = meta->classInfoOffset(); i < meta->classInfoCount(); i++)
    {
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->lineEdit->textEdited(QString("Name=%1， Value= %2").arg(classInfo.name()).arg(classInfo.value()));
    }
}


void Widget::on_GirlButton_clicked()
{

}


void Widget::on_BoyButton_clicked()
{

}

