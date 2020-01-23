/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *registration2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QString::fromUtf8("Form2"));
        Form2->resize(271, 229);
        lineEdit = new QLineEdit(Form2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 30, 131, 20));
        lineEdit_2 = new QLineEdit(Form2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 120, 131, 20));
        lineEdit_3 = new QLineEdit(Form2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 150, 131, 20));
        registration2 = new QPushButton(Form2);
        registration2->setObjectName(QString::fromUtf8("registration2"));
        registration2->setGeometry(QRect(80, 180, 101, 31));
        registration2->setAutoDefault(true);
        label = new QLabel(Form2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 120, 47, 21));
        label_2 = new QLabel(Form2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 150, 61, 20));
        label_3 = new QLabel(Form2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 47, 13));
        lineEdit_4 = new QLineEdit(Form2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 60, 131, 20));
        lineEdit_5 = new QLineEdit(Form2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 90, 131, 20));
        label_4 = new QLabel(Form2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 51, 16));
        label_5 = new QLabel(Form2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(6, 90, 51, 20));
        label_6 = new QLabel(Form2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 0, 161, 31));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", nullptr));
        registration2->setText(QApplication::translate("Form2", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        registration2->setShortcut(QApplication::translate("Form2", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("Form2", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_2->setText(QApplication::translate("Form2", "\320\237\320\276\320\262\321\202\320\276\321\200\321\226\321\202\321\214:", nullptr));
        label_3->setText(QApplication::translate("Form2", "E-mail:", nullptr));
        label_4->setText(QApplication::translate("Form2", "\320\206\320\274'\321\217:", nullptr));
        label_5->setText(QApplication::translate("Form2", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265:", nullptr));
        label_6->setText(QApplication::translate("Form2", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\262\320\260\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
