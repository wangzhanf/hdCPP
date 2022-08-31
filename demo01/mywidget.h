#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "common.h"
#include "myapp.h"

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    Ui::MyWidget *ui;

    MyApp *ma = nullptr;   //成员属性，   持有对象
};

#endif // MYWIDGET_H
