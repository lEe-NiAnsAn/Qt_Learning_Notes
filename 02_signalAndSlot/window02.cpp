#include "window02.h"
//创建自订信号槽：
//1、自订信号源与接收器类
//2、自订信号与槽函数
//3、创建信号源与接收器对象的指针
//4、设置信号发出条件
//5、链接信号与接收器
#include <QPushButton>
//信号可与信号链接
//一个信号可链接多个槽函数
//多个信号亦可同时链接同一槽函数
//信号与槽的参数类型须一一对应
//信号参数个数可多于槽函数，反之不可，且对应个数参数类型亦须一一对应
//可利用disconnect()函数断开链接，调用时参数同connect()

Window02::Window02(QWidget *parent)
    : QWidget(parent)
{
    this->c01 = new Commanders(this);
    this->f01 = new Fighters(this);//继承父类接入对象树(该处有参构造为继承QObject类中构造)
    //函数指针指向地址
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

    //信号链接信号：实现点击按钮代替信号发出函数
    QPushButton* btn1 = new QPushButton("发出命令",this);
    this->c03 = new Commanders(this);
    this->f03 = new Fighters(this);
    void(Commanders::* commandersSignal03)() = &Commanders::order;
    void(Fighters::* fightersSignal03)() = &Fighters::charge;
    connect(this->c03,commandersSignal03,this->f03,fightersSignal03);
    //将QPushButton信号与Commanders信号链接
    connect(btn1,&QPushButton::clicked,this->c03,commandersSignal03);
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
