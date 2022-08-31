#include "mywidget.h"
#include "ui_mywidget.h"


MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    //初始化
    ma = new MyApp();

    //点击按钮打开ma
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        this->hide();
        ma->show();

        //查询数据库
//        QSqlQuery qsq;
//        qsq.exec("select * from user");

        qDebug() << age;
    });

    //ma界面点击返回按钮则显示当前界面，把ma隐藏
    connect(ma,&MyApp::previousPage,this,[=](){
        this->show();
        ma->hide();
    });

}

MyWidget::~MyWidget()
{
    delete ui;
}
