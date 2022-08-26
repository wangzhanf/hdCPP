#include "multabdemo.h"
#include "ui_multabdemo.h"

MulTabDemo::MulTabDemo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MulTabDemo)
{
    ui->setupUi(this);

    ui->tab->setWindowTitle(tr("tab1"));
    ui->tab_2->setWindowTitle(tr("tab2"));
    ui->tab_3->setWindowTitle(tr("tab3"));
}

MulTabDemo::~MulTabDemo()
{
    delete ui;
}
