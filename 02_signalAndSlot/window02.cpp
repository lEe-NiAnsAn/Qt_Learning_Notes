#include "window02.h"
//创建自订信号槽：
//1、自订信号源与接收器类
//2、自订信号与槽函数
//3、创建信号源与接收器对象的指针
//4、设置信号发出条件
//5、链接信号与接收器

Window02::Window02(QWidget *parent)
    : QWidget(parent)
{
    this->c01 = new Commanders(this);
    this->f01 = new Fighters(this);//继承父类接入对象树(该处有参构造为继承QObject类中构造)
    void(Commanders::* commandersSignal01)() = &Commanders::order;
    void(Fighters::* fightersSignal01)() = &Fighters::charge;
    connect(this->c01,commandersSignal01,this->f01,fightersSignal01);
    timeRight();    //调用信号发出函数

    //有参信号与槽函数的调用
    this->c02 = new Commanders(this);
    this->f02 = new Fighters(this);
    //定义特定函数指针指向对应有参函数地址
    void(Commanders::* commandersSignal02)(QString) = &Commanders::order;
    void(Fighters::* fightersSignal02)(QString) = &Fighters::charge;
    connect(this->c02,commandersSignal02,this->f02,fightersSignal02);
    timeRight("前线");
}

void Window02::timeRight()
{//实现信号发出函数
    emit this->c01->order();    //emit关键字发出信号
}

void Window02::timeRight(QString goalPos)
{
    emit this->c02->order(goalPos);  //发出特定有参信号
}

Window02::~Window02() {}
