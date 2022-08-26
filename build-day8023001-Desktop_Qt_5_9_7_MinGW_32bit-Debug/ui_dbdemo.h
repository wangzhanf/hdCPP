/********************************************************************************
** Form generated from reading UI file 'dbdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBDEMO_H
#define UI_DBDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBDemo
{
public:
    QListView *listView;
    QTableView *tableView;

    void setupUi(QWidget *DBDemo)
    {
        if (DBDemo->objectName().isEmpty())
            DBDemo->setObjectName(QStringLiteral("DBDemo"));
        DBDemo->resize(1068, 597);
        listView = new QListView(DBDemo);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(20, 20, 256, 192));
        tableView = new QTableView(DBDemo);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(340, 20, 471, 191));

        retranslateUi(DBDemo);

        QMetaObject::connectSlotsByName(DBDemo);
    } // setupUi

    void retranslateUi(QWidget *DBDemo)
    {
        DBDemo->setWindowTitle(QApplication::translate("DBDemo", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DBDemo: public Ui_DBDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBDEMO_H
