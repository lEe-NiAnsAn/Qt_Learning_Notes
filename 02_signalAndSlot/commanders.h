#ifndef COMMANDERS_H
#define COMMANDERS_H

#include <QObject>

//信号源类
class Commanders : public QObject
{
    Q_OBJECT
public:
    explicit Commanders(QObject *parent = nullptr);

signals:
//自订信号：需定义在singnals下，且无需返回值与实现，仅需声明，可拥有参数与重载版本
    void order();
    void order(QString goalPos);
};

#endif // COMMANDERS_H
