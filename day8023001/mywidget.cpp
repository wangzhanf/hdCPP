#include "mywidget.h"
#include "ui_mywidget.h"


MyWidget::MyWidget(QWidget *parent) : QWidget(parent), ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    mmw = new MyMainWindow();
    dbd = new DBDemo();
    mtd = new MulTabDemo();

//    this->setGeometry(50,50,800,800);

    //引入自定义的组件,3    初始化成员属性
    rd = new RegisterDialog();
//    Qt实现了一个对象树机制，   每个Qt的对象可以指定父对象， 最终构成以QObject为根的对象树，对象销毁时自动调用直系父和子的析构函数，确保内存正确回收
//     rd->setParent(this); //析构函数中可以不用手工delete
//    rd->setGeometry(200,200,200,200);
    //引入自定义的组件,4    展示自定义组件
//    rd->show();//show展现组件
//     int ret = rd->exec();//开启事件监听，并且获取到返回内容，阻塞模式
//     qDebug() << "ret:" << ret;

    //构造函数
    //因为采用了独立的ui界面文件，  修改ui文件后需运行才可以获得对应组件变量
    //所有在ui中添加的组件都被封装在  ui  这个指针变量中

//    ui->myBtn->setText("注册新用户");
//    ui->myBtn->setGeometry(200,200,100,100);


    //建议在构造函数中初始化成员
//    regBtn = new QPushButton(this);//养成习惯，组件基本上都属于其他组件，可以自动析构回收内存，一般父组件就是当前组件
////    regBtn->setParent(this);//亦可
//    regBtn->setText("注册");
//    regBtn->show();


//    20220825信号和槽的应用
    connect(ui->regBtn,&QPushButton::clicked,rd,&RegisterDialog::mySlot);




    //数据类型
//    int x;
    qint32 x = 12;

//    字符串都是基于  QString  ，便于存储和处理，QString封装了多个方法实现对字符串的  增删改查
    QString myStr = "Hello";
    myStr.append(" Qt!").push_back("!!");
//    为了便于代码编码转换和本地化操作，建议所有的字符串使用   tr全局函数包裹
    myStr.append(tr("wangzhanf"));
    //例如存在 字符串     item1,item2,item3.....itemN    ，需要转换为字符串数组   section方法分隔
    //日志输出调试程序 , 使用

    //调用初始化函数
    init();



    //布局管理器的代码实现
    QHBoxLayout *qbl1 = new QHBoxLayout(this);
    qbl1->setStretch(0,3);
    qbl1->setStretch(1,5);

    QPushButton *btn1 = new QPushButton(this);
    QLabel *ql1 = new QLabel("haha");

    qbl1->addWidget(btn1,0);
    qbl1->addWidget(ql1,1);
}

MyWidget::~MyWidget()
{
    delete ui;
    //引入自定义的组件,5    析构函数中正确的释放内存
    delete rd;
}

//init初始化函数的定义
void MyWidget::init()
{
    //
//    std::cout << "init 开始运行" << std::endl;
    //QDebug 输出日志调试信息
    qDebug() << "init 开始运行";
    QString name = "wangzhanf";
    qint32 age  = 18;
    //QString msg = "我的名字是 "+ name +"，今年"+age+"岁";//字符串拼接法，缺点语法复杂
    QString msg = QString("我的名字是 %1，今年%2岁").arg(name).arg(age);//利用链式编程附带多个参数
    qDebug() << msg;


    //QStringList     由String构建的List结构，特点是方便插入删除，不利于遍历【播放列表】
    QStringList playList;
    playList.append(tr("人间"));
    playList.append(tr("爱"));
    playList << "伤心太平洋" << "达拉崩吧";   //语法糖

    QList<qint32> newList;//通过泛型， 可以设置容器容纳指定的数据类型
    newList << 1  << 88;
}

void MyWidget::on_pushButton_clicked()
{
    mmw->show();
}

void MyWidget::on_dbBtn_clicked()
{
    dbd->show();
}

void MyWidget::on_tabBtn_clicked()
{
    mtd->show();
}
