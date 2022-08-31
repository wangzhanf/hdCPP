#include "mywidget.h"
#include "common.h"
#include <QApplication>


//定义
int age = 18;
QSqlDatabase db;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //初始化全局变量[定义]


    //打开数据库
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my.db");
    if(!db.open()){
        qDebug() << "数据库打开失败" << ",一般原因是数据库指定路径错误";
    }

    MyWidget w;
    w.show();

    return a.exec();
}
