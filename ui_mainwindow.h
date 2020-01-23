/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *avtorizate;
    QPushButton *registration;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(256, 260);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 90, 111, 20));
        lineEdit->setMaximumSize(QSize(113, 20));
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 60, 111, 20));
        avtorizate = new QPushButton(centralwidget);
        avtorizate->setObjectName(QString::fromUtf8("avtorizate"));
        avtorizate->setGeometry(QRect(80, 120, 111, 31));
        registration = new QPushButton(centralwidget);
        registration->setObjectName(QString::fromUtf8("registration"));
        registration->setGeometry(QRect(80, 160, 111, 31));
        registration->setAutoDefault(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 47, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 51, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 20, 171, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 256, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        registration->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        avtorizate->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\321\226\321\217", nullptr));
#ifndef QT_NO_SHORTCUT
        avtorizate->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        registration->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "E-mail:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\260\320\274 \320\277\320\276\321\202\321\200\321\226\320\261\320\275\320\276 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\321\203\320\262\320\260\321\202\320\270\321\201\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
