#include "person.h"

person::person(QString name, QObject *parent)
    : QObject(parent)
{
    m_name = name;
}

int person::getAge()
{
    return m_age;
}

void person::setAge(int value)
{
    m_age = value;
    emit ageChanged(m_age);     // 发射信号
}

void person::incAge()
{
    m_age++;
    emit ageChanged(m_age);
}