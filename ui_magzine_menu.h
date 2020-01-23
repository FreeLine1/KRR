/********************************************************************************
** Form generated from reading UI file 'magzine_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGZINE_MENU_H
#define UI_MAGZINE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magzine_menu
{
public:
    QTableView *tableView;
    QPushButton *addprod;
    QPushButton *refresh;
    QPushButton *dellprod;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *search;

    void setupUi(QWidget *Magzine_menu)
    {
        if (Magzine_menu->objectName().isEmpty())
            Magzine_menu->setObjectName(QString::fromUtf8("Magzine_menu"));
        Magzine_menu->resize(543, 501);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        Magzine_menu->setFont(font);
        tableView = new QTableView(Magzine_menu);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 160, 521, 331));
        addprod = new QPushButton(Magzine_menu);
        addprod->setObjectName(QString::fromUtf8("addprod"));
        addprod->setGeometry(QRect(50, 110, 131, 31));
        refresh = new QPushButton(Magzine_menu);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(370, 110, 121, 31));
        dellprod = new QPushButton(Magzine_menu);
        dellprod->setObjectName(QString::fromUtf8("dellprod"));
        dellprod->setGeometry(QRect(210, 110, 131, 31));
        label_4 = new QLabel(Magzine_menu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 30, 171, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Script"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);
        lineEdit = new QLineEdit(Magzine_menu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 70, 113, 21));
        search = new QPushButton(Magzine_menu);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(370, 62, 121, 31));

        retranslateUi(Magzine_menu);

        QMetaObject::connectSlotsByName(Magzine_menu);
    } // setupUi

    void retranslateUi(QWidget *Magzine_menu)
    {
        Magzine_menu->setWindowTitle(QApplication::translate("Magzine_menu", "Form", nullptr));
        addprod->setText(QApplication::translate("Magzine_menu", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\320\270 \321\202\320\276\320\262\320\260\321\200", nullptr));
        refresh->setText(QApplication::translate("Magzine_menu", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\320\270 ", nullptr));
        dellprod->setText(QApplication::translate("Magzine_menu", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\262\320\270\320\261\321\200\320\260\320\275e \320\277\320\276\320\273e", nullptr));
        label_4->setText(QString());
        search->setText(QApplication::translate("Magzine_menu", "\320\237\320\276\321\210\321\203\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Magzine_menu: public Ui_Magzine_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGZINE_MENU_H
