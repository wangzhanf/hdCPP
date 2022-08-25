#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    ui->actionOpen->setIcon(QIcon(":/img/resources/open.png"));
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}
