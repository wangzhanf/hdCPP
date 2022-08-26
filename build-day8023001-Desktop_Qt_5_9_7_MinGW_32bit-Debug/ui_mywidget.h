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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUname;
    QLineEdit *lineEditUname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUpass;
    QLineEdit *lineEditUpass;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginBtn;
    QPushButton *regBtn;
    QPushButton *pushButton;
    QPushButton *dbBtn;
    QPushButton *tabBtn;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(1039, 864);
        MyWidget->setStyleSheet(QLatin1String("QLabel{\n"
"	\n"
"	color: rgb(255, 5, 17);\n"
"	\n"
"	font: 75 24pt \"Adobe Devanagari\";\n"
"}\n"
"\n"
"#labelUpass{\n"
"\n"
"	text-decoration: underline;\n"
"	background-color: rgb(0, 170, 0);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        layoutWidget = new QWidget(MyWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 90, 361, 158));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelUname = new QLabel(layoutWidget);
        labelUname->setObjectName(QStringLiteral("labelUname"));

        horizontalLayout->addWidget(labelUname);

        lineEditUname = new QLineEdit(layoutWidget);
        lineEditUname->setObjectName(QStringLiteral("lineEditUname"));

        horizontalLayout->addWidget(lineEditUname);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelUpass = new QLabel(layoutWidget);
        labelUpass->setObjectName(QStringLiteral("labelUpass"));

        horizontalLayout_2->addWidget(labelUpass);

        lineEditUpass = new QLineEdit(layoutWidget);
        lineEditUpass->setObjectName(QStringLiteral("lineEditUpass"));
        lineEditUpass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(lineEditUpass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        loginBtn = new QPushButton(layoutWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));

        horizontalLayout_3->addWidget(loginBtn);

        regBtn = new QPushButton(layoutWidget);
        regBtn->setObjectName(QStringLiteral("regBtn"));

        horizontalLayout_3->addWidget(regBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 410, 99, 28));
        dbBtn = new QPushButton(MyWidget);
        dbBtn->setObjectName(QStringLiteral("dbBtn"));
        dbBtn->setGeometry(QRect(20, 520, 99, 28));
        tabBtn = new QPushButton(MyWidget);
        tabBtn->setObjectName(QStringLiteral("tabBtn"));
        tabBtn->setGeometry(QRect(20, 700, 161, 28));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", Q_NULLPTR));
        labelUname->setText(QApplication::translate("MyWidget", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        labelUpass->setText(QApplication::translate("MyWidget", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("MyWidget", "\347\231\273\345\275\225", Q_NULLPTR));
        regBtn->setText(QApplication::translate("MyWidget", "\346\263\250\345\206\214\346\214\211\351\222\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyWidget", "\346\211\223\345\274\200\346\226\260\347\252\227\345\217\243", Q_NULLPTR));
        dbBtn->setText(QApplication::translate("MyWidget", "\346\225\260\346\215\256\345\272\223\346\274\224\347\244\272", Q_NULLPTR));
        tabBtn->setText(QApplication::translate("MyWidget", "\345\244\232tab\345\210\207\346\215\242\346\274\224\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
