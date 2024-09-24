#include "widget01.h"
#include <QPushButton>
#include "mypushbutton.h"

Widget01::Widget01(QWidget* parent)
    : QWidget(parent)   //初始化参数列表
{
    //Qt中功能通常在窗口类的构造函数中实现
    QPushButton* btn1 = new QPushButton; //需包含对应头文件
    //btn->show();    //以顶层方式显示(单独窗口)
    btn1->setParent(this);   //设置父窗口，参数：指定父窗口的指针
    btn1->setText("按钮一"); //设置按钮显示文本
    QPushButton* btn2 = new QPushButton("按钮二",this);    //简便形式
    btn2->move(100,0);  //移动按钮位置
    //this->resize(720,480);  //重置窗口尺寸(可变动)
    this->setFixedSize(720,480);    //设置固定尺寸
    this->setWindowTitle("窗口一");
    //对象树：此处按钮控件均为父类QObject(或其派生类)下派生类，如同树枝与树的关系；
    //当父类窗口(主程序)关闭后，"树枝"将一层层释放，故new对象后无须手动delete

    //自订按钮控件，显示其析构函数，验证其释放内存的过程
    //1、添加新C++ class文件：类名、继承父类
    //2、更改.h文件中包含头文件、继承父类
    //3、添加析构函数
    MyPushButton* mbtn = new MyPushButton;
    mbtn->setParent(this);
    mbtn->move(0,30);
    mbtn->setText("自订按钮");
    //析构函数信息输出即在"应用程序输出窗口"
}

Widget01::~Widget01() {}
