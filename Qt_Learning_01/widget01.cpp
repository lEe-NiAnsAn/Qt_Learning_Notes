#include "widget01.h"
#include <QPushButton>

Widget01::Widget01(QWidget* parent)
    : QWidget(parent)   //初始化参数列表
{
    //Qt中功能通常在窗口类的构造函数中实现
    QPushButton* btn1 = new QPushButton; //需包含对应头文件
    //btn->show();    //以顶层方式显示(单独窗口)
    btn1->setParent(this);   //设置父窗口，参数：指定父窗口的指针
    btn1->setText("按钮一"); //设置俺就显示文本
    QPushButton* btn2 = new QPushButton("按钮二",this);    //简便形式
    btn2->move(100,0);  //移动按钮位置
    //this->resize(720,480);  //重置窗口尺寸(可变动)
    this->setFixedSize(720,480);    //设置固定尺寸
    this->setWindowTitle("窗口一");
}

Widget01::~Widget01() {}
