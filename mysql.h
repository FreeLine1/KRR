#ifndef MYSQL_H
#define MYSQL_H

#include"mainwindow.h"
class My_Sql//MainWindow
{
     QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL3");
     bool info();
public:
    My_Sql();
    bool connect();
    void discon();
    QSqlDatabase dbb();
};

#endif // MYSQL_H
