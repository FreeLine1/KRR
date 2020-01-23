#include "form2.h"
#include "ui_form2.h"
#include"mainwindow.h"
#include"mysql.h"
#include"hesh.h"
Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
     window()->setFixedSize(270,225);
      this->setWindowTitle("Реєстрація");
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_lineEdit_textChanged(const QString &arg1)
{

}

void Form2::on_lineEdit_2_textChanged(const QString &arg1)
{

}

void Form2::on_lineEdit_3_textChanged(const QString &arg1)
{

}

void Form2::on_registration2_clicked()
{
    My_Sql *sql_1=new My_Sql;
    Hesh heshing;
    QString inp_log,name,lname;
    QString inp_pass;
    if(ui->lineEdit_2!=nullptr&&ui->lineEdit->text()!=nullptr&&ui->lineEdit_3!=nullptr){
        if(ui->lineEdit_2->text()==ui->lineEdit_3->text()&&(ui->lineEdit->text().endsWith("gmail.com")
        ||ui->lineEdit->text().endsWith("mail.ru"))&& ui->lineEdit_4!=nullptr&&ui->lineEdit_5!=nullptr ){
        inp_log=ui->lineEdit->text();


                  if(sql_1->connect()){
           QSqlQuery zap,zap_1;
           zap.prepare("SELECT COUNT(*) FROM user WHERE email=:email");
           zap.bindValue(":email",inp_log);
           zap.exec();
           int a=0,b=0;

           if(zap.next()){
               a=zap.value(0).toInt();
           }
           if(a==0){
               zap.clear();
               zap.exec("SELECT MAX(id) FROM user");
               if(zap.next()){
                   b=zap.value(0).toInt();
                   b++;
               }

               name=ui->lineEdit_4->text();
               lname=ui->lineEdit_5->text();
               zap.clear();inp_pass=heshing.Func( ui->lineEdit_2->text());
               zap.prepare("INSERT INTO user (id,email,password) VALUES(:id,:email,:password)");
               zap.bindValue(":id",b);
               zap.bindValue(":email",inp_log);
               zap.bindValue(":password",inp_pass);
               zap_1.prepare("INSERT INTO people(Name,LastName,email) VALUES(:Name,:lName,:email);");
               zap_1.bindValue(":Name",name);
               zap_1.bindValue(":lName",lname);
               zap_1.bindValue(":email",inp_log);

              if(zap.exec()&&zap_1.exec()){

                    zap.exec();
                    if(QMessageBox::information(this,"Succesful","Тепер ви можете авторизуватись")){




                    }


              }
              else{
                 QMessageBox::warning(this,"Error","Error");
              }


           }
           else{
              QMessageBox::warning(this,"Error","Цей E-mail вже зареєстрований");
           }

        }
        else{
            QMessageBox::warning(this,"Error","Перевірте підключення до БД");
        }

    }else{
             QMessageBox::warning(this,"Error","Перевірте правельність введених данних");
        }
    }
    else{
        QMessageBox::warning(this,"Error","Будь ласка заповніть всі поля");
    }

    sql_1->discon();
  delete sql_1;

}

void Form2::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{

}

void Form2::on_lineEdit_4_textChanged(const QString &arg1)
{

}

void Form2::on_lineEdit_5_textChanged(const QString &arg1)
{

}
