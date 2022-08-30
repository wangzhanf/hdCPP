#include "mywidget.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //加载样式文件，   确保所有的界面组件共享一份qss样式设置
    QFile qss(":/style/resources/myStyle.qss");//资源路径模式， 便于资源发布
    if(qss.open(QFile::ReadOnly)){//以只读方式打开文件
        QString style = qss.readAll();//读取所有内容
        a.setStyleSheet(style);//设置当前程序的样式
    }


    MyWidget w;   //创建界面对象
    w.show();       //因为所有的界面都是基于QWidget，QWidget提供了show用以显式组件

    return a.exec(); //开启循环监听，确保事件可以被正确的处理
}
