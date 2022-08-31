#ifndef MYAPP_H
#define MYAPP_H

#include <QWidget>
#include "common.h"

namespace Ui {
class MyApp;
}

class MyApp : public QWidget
{
    Q_OBJECT

public:
    explicit MyApp(QWidget *parent = nullptr);
    ~MyApp();

private:
    Ui::MyApp *ui;
signals:
    void previousPage();//回到上一界面，信号
};

#endif // MYAPP_H
