#include "window02.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window02 w;
    w.show();
    return a.exec();
}
