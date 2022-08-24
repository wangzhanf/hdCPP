#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private:
    Ui::RegisterDialog *ui;


//    覆写override基类提供的事件函数
protected:


    virtual void mouseDoubleClickEvent(QMouseEvent *event);


};

#endif // REGISTERDIALOG_H
