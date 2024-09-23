#include "widget01.h"
#include <QPushButton>

Widget01::Widget01(QWidget* parent)
    : QWidget(parent)   //初始化参数列表
{
    //Qt中功能通常在窗口类的构造函数中实现
    QPushButton* btn = new QPushButton; //需包含对应头文件
    //btn->show();    //以顶层方式显示(单独窗口)
    btn->setParent(this);   //设置父窗口，参数：指定父窗口的指针

}

Widget01::~Widget01() {}
