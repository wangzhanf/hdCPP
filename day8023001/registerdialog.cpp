#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);


    //当QSpinBox的值改变时执行让滑块的值也改变, Qt4的信号和槽不进行错误检查，建议使用Qt5方式进行
//    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(setValue(int)));
//    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->spinBox,SLOT(setValue(int)));



    //Qt5实现[推荐]
//    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);
////    connect(ui->spinBox,&QSpinBox::valueChanged,ui->horizontalSlider,&QSlider::setValue);//因为存在重载函数，无法确定调用哪一个
////    connect(ui->spinBox,&QSpinBox::valueChanged(int),ui->horizontalSlider,&QSlider::setValue);//函数带括号意味着要调用函数并且得到返回值
//    void (QSpinBox:: * vc)(int) = &QSpinBox::valueChanged;//定义函数指针实现重载信号和槽的识别
//    connect(ui->spinBox,vc,ui->horizontalSlider,&QSlider::setValue);//


    //将自己的信号和自己的槽绑定，确保mySignal信号发出时采取行动,也可以采用匿名函数方式实现信号和槽，lambda表达式
    connect(this,&RegisterDialog::mySignal,this,[=](){
        ui->spinBox->setValue(50);
        ui->horizontalSlider->setValue(50);
    });

}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}


void RegisterDialog::mouseDoubleClickEvent(QMouseEvent *event){
    qDebug() << "自定义的事件处理函数【覆写事件】发生了";
    qDebug() << event->globalX();


/*

  光标定位在输入框并且输入文字的时候
  覆写  xxxx事件  keyPress{
      //获取已输入的内容，输入框
      keyword
      //执行查询
      select * from keyTab where key like '%keyword%'
      //将查询结果回填到输入框对应的下拉菜单

    }

*/


}

//void RegisterDialog::on_spinBox_valueChanged(const QString &arg1)
//{
//   qDebug() << "通过组件转到槽的模式开始执行" << arg1;
//}


//槽函数的实现
void RegisterDialog::mySlot()
{
    qDebug() << "mySlot跑起来了";
    //需要将spinBox的值设置为  50

//    ui->spinBox->setValue(50);//调用槽函数
    //在函数中发送信号
//    ui->spinBox->valueChanged(50);

    emit mySignal(50);
}
