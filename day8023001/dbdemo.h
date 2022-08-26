#ifndef DBDEMO_H
#define DBDEMO_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class DBDemo;
}

class DBDemo : public QWidget
{
    Q_OBJECT

public:
    explicit DBDemo(QWidget *parent = nullptr);
    ~DBDemo();

private:
    Ui::DBDemo *ui;
    QStandardItemModel *qsim = nullptr;
};

#endif // DBDEMO_H
