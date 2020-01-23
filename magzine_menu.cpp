#include "magzine_menu.h"
#include "ui_magzine_menu.h"
#include"mainwindow.h"
#include"mysql.h"

Magzine_menu::Magzine_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Magzine_menu)
{

    ui->setupUi(this);
    setWindowTitle("Облік товару");
    My_Sql a;
    a.connect();
   // connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(updateList(QString)));
    da = new QSqlTableModel(this,a.dbb());
    da->setTable("products");
    da->select();
    da->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->tableView->setModel(da);
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->verticalHeader()->setVisible(false);


}
void Magzine_menu::setDj(const QString &dj){
    m_dj = dj;
    ui->label_4->setText(dj);
}
Magzine_menu::~Magzine_menu()
{

    delete ui;
}

void Magzine_menu::on_tableView_activated(const QModelIndex &index)
{

}

void Magzine_menu::on_comboBox_activated(const QString &arg1)
{

}

void Magzine_menu::on_addprod_clicked()
{
    da->insertRow(da->rowCount());
}

void Magzine_menu::on_refresh_clicked()
{
    ;
}

void Magzine_menu::on_dellprod_clicked()
{

    int SelectRows=ui->tableView->currentIndex().row();
    if(SelectRows>=0){
        da->removeRow(SelectRows);
    }
    else{
         QMessageBox::warning(this,"Error","Ні одне поле не було виділено");
    }

}

void Magzine_menu::on_label_4_linkActivated(const QString &link)
{

}

void Magzine_menu::on_label_4_windowTitleChanged(const QString &title)
{

}

void Magzine_menu::on_lineEdit_textChanged(const QString &arg1)
{

}
void Magzine_menu::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{

}

void Magzine_menu::on_lineEdit_textEdited(const QString &arg1) {


     }



void Magzine_menu::on_search_clicked()
{
    My_Sql a;
       a.connect();
       QSqlQueryModel *f = new QSqlQueryModel();
       QSqlQuery zap ;
       QString zap_str= ui->lineEdit->text();
       if(!zap_str.toInt()){
       zap.prepare("select * from products where products.Авто like ('%"+zap_str+"%');");

       }
       else {
           zap.prepare("select * from products where products.Артикул like ('%"+zap_str+"%'); ");

       }


       zap.exec();
       f->setQuery(zap);
       ui->tableView->setModel(f);
       a.discon();


}
