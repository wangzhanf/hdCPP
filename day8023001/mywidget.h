//声明文件，   头文件守卫防止多次被包含
#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <iostream>
#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QList>
#include <QStringList>
#include "mymainwindow.h"
#include "dbdemo.h"

//引入自定义的组件,1 包含对应的声明头
#include "registerdialog.h"

namespace Ui {
class MyWidget;
}

// 自定义的MyWidget类 公共继承于    QWidget 类
class MyWidget : public QWidget
{
    Q_OBJECT
    // Q_OBJECT由Qt提供，实现信号和槽
public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    void on_pushButton_clicked();
    void on_dbBtn_clicked();

private:
    Ui::MyWidget *ui;
    MyMainWindow *mmw = nullptr;
    QPushButton *regBtn = nullptr;//声明一个堆对象【成员属性】
    void init();//声明一个初始化函数

    //引入自定义的组件,2    声明一个成员属性
    RegisterDialog *rd = nullptr;
    DBDemo *dbd = nullptr;
};

#endif // MYWIDGET_H
