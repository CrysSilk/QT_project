#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class person : public QObject
{
private:
    Q_OBJECT;

    // 类的赋值信息 --- 名称 and 值
    Q_CLASSINFO("author", "dnk");
    Q_CLASSINFO("version", "2.0");
    Q_CLASSINFO("info", "csgo");

    // 属性定义
    // 属性 age 函数方法 getAge 和 setAge 对其进行读写 设置信号 ageChanged()
    Q_PROPERTY(Int age READ getAge WRITE setAge NOTIFY ageChanged);
    // 属性 name 与 类成员变量 m_name 关联
    Q_PROPERTY(QString name MEMBER m_name);
    // 属性 score 与 类成员变量 m_score 关联
    Q_PROPERTY(int score MEMBER m_score);

public:
    // explicit 用于阻止编译器进行隐藏的、自动的类型转换的关键字
    explicit person(QString name, QObject *parent = nullptr);

public:
    int getAge();                // 属性 READ
    void setAge(int value);       // 属性 WRITE

    void incAge();

signals:
    void ageChanged(int value);  // 属性age发送变化的信号函数

private:
    int m_age = 5;
    QString m_name;
    int m_socre = 50;
};

#endif // PERSON_H
