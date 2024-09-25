#include "fighters.h"
#include <QDebug>

Fighters::Fighters(QObject *parent)
    : QObject{parent}
{}

void Fighters::charge()
{
    qDebug() << "冲刺！！！";
}
