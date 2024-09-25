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
    connect(this->c01,&Commanders::order,this->f01,&Fighters::charge);
    timeRight();    //调用信号发出函数
}

void Window02::timeRight()
{//实现信号发出函数
    emit this->c01->order();    //emit关键字发出信号
}

Window02::~Window02() {}
