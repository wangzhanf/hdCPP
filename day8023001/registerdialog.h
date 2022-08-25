#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include <QDebug>
#include <QHBoxLayout>

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

//slots是何种修饰符无关，组件转到槽方式， 会自动添加一个    on_对象名_信号()   槽函数声明
private slots:
//    void on_spinBox_valueChanged(const QString &arg1);

public slots:
    void mySlot();

signals:
    void mySignal(int);//自定义的信号
};

#endif // REGISTERDIALOG_H
