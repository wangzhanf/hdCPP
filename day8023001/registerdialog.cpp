#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}


void RegisterDialog::mouseDoubleClickEvent(QMouseEvent *event){
    qDebug() << "自定义的事件处理函数【覆写事件】发生了";
    qDebug() << event->globalX();
}
