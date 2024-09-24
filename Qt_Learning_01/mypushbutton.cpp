#include "mypushbutton.h"
#include <QDebug>   //打印调试信息所需头文件

MyPushButton::MyPushButton(QWidget *parent)
    : QPushButton{parent}
{}
MyPushButton:: ~MyPushButton()
{
    qDebug() << "自订按钮控件析构函数调用";  //类似cout，自带换行
}
