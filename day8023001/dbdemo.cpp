#include "dbdemo.h"
#include "ui_dbdemo.h"

DBDemo::DBDemo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DBDemo)
{
    ui->setupUi(this);  //这一行要放在首行位置

    //使用数据库的过程演示demo，
    /*
1   编辑项目配置文件.pro  添加sql 模块，  Qt采用模块化加载方式，可以确保编译结果文件大小
2   项目中添加具体的头文件，  Qt采用抽象化接口方式实现数据库链接和结果封装，所以加载头和具体的数据库低耦合【QSqlDatabase   ，  QSqlQuery】
3   访问数据库过程可以简化为
    3.1  加载数据库驱动    ，小型程序使用文件关系型数据库足够，无需使用庞大的MySQL
    3.2    打开对应数据库     3.3 执行sql语句     3.4 处理结果
    */

//    QStringList drivers = QSqlDatabase::drivers();//可以查看当前支持的数据库类型
//    qDebug() << drivers; //输出所有可用的数据库  ("QSQLITE", "QMYSQL", "QMYSQL3", "QODBC", "QODBC3", "QPSQL", "QPSQL7")
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");//3.1    使用静态方法加载对应数据库驱动返回数据库操作句柄
    db.setDatabaseName("mydata");//此处需要注意， mydata所在位置不是在开发目录中，而是在编译后的运行目录中 ,本例中在 build-day8023001-Desktop_Qt_5_9_7_MinGW_32bit-Debug下哦
    if(!db.open()){//3.2 打开数据库失败的处理
        QMessageBox::critical(0,tr("数据库打开失败"),tr("一般原因是数据库指定路径错误"),QMessageBox::Ok); //仅用于演示Qt提供的消息框功能
    }

    //本例中有个小问题就是基础数据表的创建和基础数据的填写不想通过Qt实现， 结构定义可以使用第三方工具完成，  本例使用  SQLiteExpert    ，已在钉钉群共享
    //打开mydata创建一个表用于演示
    QSqlQuery qsq;
    qsq.exec("select * from mylist");//3.3  执行sql语句，查询结果会被封装到ResultSet集合【此处就是qsq对象的内部】
//    while(qsq.next()){   //3.4  处理结果
//        QString ret = QString("mid:%1,mname:%2,mprice:%3")
//                .arg(qsq.value("mid").toInt())
//                .arg(qsq.value("mname").toString())
//                .arg(qsq.value("mprice").toDouble())
//                ;
//        qDebug() << ret;
//    }

    //渲染到指定组件中
//        qsim = new QStandardItemModel(this);
//        while(qsq.next()){   //3.4  处理结果
//            QString ret = QString("mid:%1,mname:%2,mprice:%3")
//                    .arg(qsq.value("mid").toInt())
//                    .arg(qsq.value("mname").toString())
//                    .arg(qsq.value("mprice").toDouble())
//                    ;
////            qDebug() << ret;
//            QStandardItem *item = new QStandardItem(ret);

//            qsim->appendRow(item);//追加到列表
//        }

//        ui->listView->setModel(qsim);

    //多列模式
    QStandardItemModel *model = new QStandardItemModel(10,3);
    model->setHeaderData(0,Qt::Horizontal,tr("mid"));
    model->setHeaderData(1,Qt::Horizontal,tr("mname"));
    model->setHeaderData(2,Qt::Horizontal,tr("mprice"));

    QStringList midData;
    QStringList mnameData;
    QStringList mpriceData;

    while (qsq.next()) {
        model->insertRow(1);
        model->setData(model->index(1,0),qsq.value("mid").toInt());
        model->setData(model->index(1,1),qsq.value("mname").toString());
        model->setData(model->index(1,2),qsq.value("mprice").toDouble());
    }

    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->tableView->setModel(model);


}

DBDemo::~DBDemo()
{
    delete ui;
}
