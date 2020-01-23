#include "mysql.h"

My_Sql::My_Sql()
{

}
QSqlDatabase My_Sql::dbb(){
    return db;
}
bool My_Sql::info(){
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPort(3306);

    db.setDatabaseName("drive111");
   if (db.open()){
       return true;
   }
   else {
       return false;
   }
}
void My_Sql::discon(){
    db.close();
}
bool My_Sql::connect(){


        if( info()){

            return true;
        }
        else{
         return false;
        }

}

