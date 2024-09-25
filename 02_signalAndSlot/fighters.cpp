#include "fighters.h"
#include <QDebug>

Fighters::Fighters(QObject *parent)
    : QObject{parent}
{}

void Fighters::charge()
{
    qDebug() << "冲刺！！！";
}

void Fighters:: charge(QString goalPos)
{
    qDebug() << "向" << goalPos << "冲刺！！！";
}
