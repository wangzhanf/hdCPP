/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QLabel *labelUname;
    QLineEdit *lineEditUname;
    QLabel *labelUpass;
    QLineEdit *lineEditUpass;
    QPushButton *loginBtn;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(627, 460);
        labelUname = new QLabel(MyWidget);
        labelUname->setObjectName(QStringLiteral("labelUname"));
        labelUname->setGeometry(QRect(110, 110, 81, 18));
        lineEditUname = new QLineEdit(MyWidget);
        lineEditUname->setObjectName(QStringLiteral("lineEditUname"));
        lineEditUname->setGeometry(QRect(210, 110, 113, 25));
        labelUpass = new QLabel(MyWidget);
        labelUpass->setObjectName(QStringLiteral("labelUpass"));
        labelUpass->setGeometry(QRect(110, 200, 81, 18));
        lineEditUpass = new QLineEdit(MyWidget);
        lineEditUpass->setObjectName(QStringLiteral("lineEditUpass"));
        lineEditUpass->setGeometry(QRect(210, 190, 113, 25));
        lineEditUpass->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        loginBtn = new QPushButton(MyWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(160, 310, 99, 28));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", Q_NULLPTR));
        labelUname->setText(QApplication::translate("MyWidget", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        labelUpass->setText(QApplication::translate("MyWidget", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("MyWidget", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
