#include "myapp.h"
#include "ui_myapp.h"



MyApp::MyApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyApp)
{
    ui->setupUi(this);

    //给返回按钮添加处理逻辑
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        //查询数据库
//        QSqlQuery qsq;
//        qsq.exec("select * from product");

        qDebug() << age;

        emit this->previousPage();//发出信号
    });
}

MyApp::~MyApp()
{
    delete ui;
}
