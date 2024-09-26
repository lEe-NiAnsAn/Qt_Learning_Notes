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
    //qDebug所用字符串为char*类型，强制使用QString时将自带双引号
    //qString转char*：调用toUtf8()转为QByteArray类型后再调用data()
    qDebug() << "向" << goalPos.toUtf8().data() << "冲刺！！！";
}
