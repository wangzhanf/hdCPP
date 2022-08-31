/********************************************************************************
** Form generated from reading UI file 'myapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYAPP_H
#define UI_MYAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyApp
{
public:
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *MyApp)
    {
        if (MyApp->objectName().isEmpty())
            MyApp->setObjectName(QStringLiteral("MyApp"));
        MyApp->resize(400, 300);
        pushButton = new QPushButton(MyApp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 260, 99, 28));
        tabWidget = new QTabWidget(MyApp);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 371, 241));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(MyApp);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MyApp);
    } // setupUi

    void retranslateUi(QWidget *MyApp)
    {
        MyApp->setWindowTitle(QApplication::translate("MyApp", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyApp", "\350\277\224\345\233\236", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MyApp", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MyApp", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyApp: public Ui_MyApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYAPP_H
