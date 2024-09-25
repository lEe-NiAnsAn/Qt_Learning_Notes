#ifndef FIGHTERS_H
#define FIGHTERS_H

#include <QObject>

class Fighters : public QObject
{
    Q_OBJECT
public:
    explicit Fighters(QObject *parent = nullptr);

    //槽函数：定义在public、public slots、全局函数或lambda下
    //无须返回值，需要声明与实现，允许拥有参数与重载版本
    void charge();
    void charge(QString goalPos);
signals:
};

#endif // FIGHTERS_H
