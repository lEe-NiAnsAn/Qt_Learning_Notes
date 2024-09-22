#include "widget01.h"

#include <QApplication>

int main(int argc, char* argv[])
{   //argc:为命令行数量；argv[]为命令行具体参数
    QApplication a(argc, argv); //应用程序对象，每个Qt应用有且仅有一个
    Widget01 w; //窗口对象
    w.show();   //显示对应窗口对象
    return a.exec();    //进入消息循环，起到阻塞功能：类似死循环，直到关闭窗口
}
