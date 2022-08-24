#include "mywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;   //创建界面对象
    w.show();       //因为所有的界面都是基于QWidget，QWidget提供了show用以显式组件

    return a.exec(); //开启循环监听，确保事件可以被正确的处理
}
