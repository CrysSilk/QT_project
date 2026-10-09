#include "soldier.h"
#include <QDebug>

Soldier::Soldier(QObject *parent)
    : QObject{parent}
{}

void Soldier::fight()
{
    qDebug() << "fight";
}

void Soldier::fight(QString str)
{
    qDebug() << str;
}

void Soldier::escape()
{
    qDebug() << "escape";
}
