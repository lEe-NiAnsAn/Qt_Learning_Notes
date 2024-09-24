#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>  //包含原版按钮控件即可

class MyPushButton : public QPushButton //更改继承
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);
    ~MyPushButton();    //添加析构函数

signals:
};

#endif // MYPUSHBUTTON_H
