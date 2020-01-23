/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QTableView *tableView;
    QLabel *label_4;
    QPushButton *search_cust;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName(QString::fromUtf8("Customer"));
        Customer->resize(542, 421);
        tableView = new QTableView(Customer);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 60, 521, 351));
        label_4 = new QLabel(Customer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 10, 51, 21));
        search_cust = new QPushButton(Customer);
        search_cust->setObjectName(QString::fromUtf8("search_cust"));
        search_cust->setGeometry(QRect(404, 20, 91, 31));
        lineEdit_2 = new QLineEdit(Customer);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 30, 113, 21));

        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QDialog *Customer)
    {
        Customer->setWindowTitle(QApplication::translate("Customer", "Dialog", nullptr));
        label_4->setText(QApplication::translate("Customer", "\320\222\321\226\321\202\320\260\320\275\320\275\321\217", nullptr));
        search_cust->setText(QApplication::translate("Customer", "\320\237\320\276\321\210\321\203\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
