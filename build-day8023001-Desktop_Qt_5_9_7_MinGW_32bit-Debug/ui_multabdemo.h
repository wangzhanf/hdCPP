/********************************************************************************
** Form generated from reading UI file 'multabdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTABDEMO_H
#define UI_MULTABDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <dbdemo.h>

QT_BEGIN_NAMESPACE

class Ui_MulTabDemo
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QWidget *tab_2;
    QSpinBox *spinBox;
    QWidget *tab_3;
    DBDemo *widget;

    void setupUi(QWidget *MulTabDemo)
    {
        if (MulTabDemo->objectName().isEmpty())
            MulTabDemo->setObjectName(QStringLiteral("MulTabDemo"));
        MulTabDemo->resize(781, 526);
        label = new QLabel(MulTabDemo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 311, 18));
        tabWidget = new QTabWidget(MulTabDemo);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 721, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 150, 99, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        spinBox = new QSpinBox(tab_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 150, 49, 25));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widget = new DBDemo(tab_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 691, 351));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(MulTabDemo);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MulTabDemo);
    } // setupUi

    void retranslateUi(QWidget *MulTabDemo)
    {
        MulTabDemo->setWindowTitle(QApplication::translate("MulTabDemo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MulTabDemo", "\345\244\232\344\270\252\347\225\214\351\235\242\345\210\207\346\215\242\347\232\204\346\216\250\350\215\220\346\226\271\346\241\210", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MulTabDemo", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MulTabDemo", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MulTabDemo", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MulTabDemo", "\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MulTabDemo: public Ui_MulTabDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTABDEMO_H
