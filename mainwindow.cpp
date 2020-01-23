#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"form2.h"
#include<conio.h>
#include"mysql.h"
#include"hesh.h"
#include"customer.h"
#include"magzine_menu.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Aвторизація");
    QObject::connect(ui->avtorizate,SIGNAL(),this,SLOT(Myg()));
    window()->setFixedSize(270,225);

}
 static My_Sql sql ;
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

  ui->lineEdit->setEchoMode(QLineEdit::Password);


}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{


}
void MainWindow::Myg(){
// Admin228@gmail.com : 1
    QString zap=ui->lineEdit_2->text(),zpp;
      QString t;
     if(zap=="Admin228@gmail.com"){
          Magzine_menu *fmr = new Magzine_menu(0);
      t = "Welcome Admin";
      fmr->setDj(t);
      fmr->show();

     }
     else{

         QString zap=ui->lineEdit_2->text(),zpp;
         sql.connect();
          QSqlQuery z;
          z.prepare("SELECT Name,LastName FROM test.people WHERE email=:email;");
          z.bindValue(":email",zap);
          zpp=z.exec();
          while(z.next())
          {
               zpp = z.value(0).toString();
          }
          sql.discon();
           QString t;
         Customer *fmr1 = new Customer ;

         t ="Вітання"+zpp;
         fmr1->setDjj(t);
         fmr1->show();



     }

}
void MainWindow::on_avtorizate_clicked()
{
    Hesh heshing;
    QString inp_pass;
    QString zapr;
    QString input_log;
    QSqlQuery zap;



    if(sql.connect()){
      if(ui->lineEdit->text()!=nullptr&&ui->lineEdit_2->text()!=nullptr
              &&( ui->lineEdit_2->text().endsWith("@gmail.com")
              || ui->lineEdit_2->text().endsWith("@mail.ru"))){

          input_log=ui->lineEdit_2->text();
          inp_pass=heshing.Func(ui->lineEdit->text());
         zap.prepare("SELECT COUNT(*) FROM user WHERE password=:pass and email=:email");
         zap.bindValue(":pass",inp_pass);
         zap.bindValue(":email",input_log);
         zap.exec();
         int a=0;
            if(zap.next()){
                a=zap.value(0).toInt();
              }
         if(a!=0){

            Myg(); sql.discon();
            this->hide();


         }
         else{
            QMessageBox::information(this,"Error","Пароль або логін невірні ");
         }

         }
         else{
         QMessageBox::warning(this,"Error","Перевірте правельність введених данних");

        }

        }

        else{
          QMessageBox::information(this,"Error","Перевірте з'єднання з БД");

        } sql.discon();

}

void MainWindow::on_registration_clicked()
{
    Form2 *f = new Form2;
       f->show();
       this->hide();

}

void MainWindow::on_lineEdit_inputRejected()
{


}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{

}

void MainWindow::on_registration_pressed(){


}
