#ifndef WIDGET01_H
#define WIDGET01_H

#include <QWidget>

class Widget01 : public QWidget
{
    Q_OBJECT    //Q_OBJECT宏：支持Qt中的信号与槽机制

public:
    Widget01(QWidget *parent = nullptr);
    ~Widget01();
};
#endif // WIDGET01_H    //此三行#define为防止头文件重复包含
