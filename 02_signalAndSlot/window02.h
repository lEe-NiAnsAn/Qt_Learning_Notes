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
    Fighters* f01;  //指针
    void timeRight();   //信号发出条件
};
#endif // WINDOW02_H
