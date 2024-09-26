#ifndef WINDOW02_H
#define WINDOW02_H

#include <QWidget>

#include "commanders.h"
#include "fighters.h"
class Window02 : public QWidget
{
    Q_OBJECT

public:
    Window02(QWidget *parent = nullptr);
    ~Window02();

    Commanders* c01;
    Commanders* c02;
    Commanders* c03;
    Fighters* f01;
    Fighters* f02;
    Fighters* f03;  //指针
    void timeRight();   //信号发出条件
    void timeRight(QString goalPos);    //有参重载
};
#endif // WINDOW02_H
