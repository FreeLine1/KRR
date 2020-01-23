#include "customer.h"
#include "ui_customer.h"
#include"mainwindow.h"
#include"mysql.h"
Customer::Customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
    ui->setupUi(this);
    setWindowTitle("Перелік товарів");
    My_Sql a;
    a.connect();
    da = new QSqlTableModel(this,a.dbb());
    da->setTable("products");
    da->select();
    da->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->tableView->setModel(da);
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

Customer::~Customer()
{
    delete ui;
}
void Customer::setDjj(const QString& djj){
    m_djj=djj;
    ui->label_4->setText(m_djj);

}
void Customer::on_tableView_activated(const QModelIndex &index)
{

}

void Customer::on_label_4_linkActivated(const QString &link)
{

}

void Customer::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{

}

void Customer::on_lineEdit_2_textChanged(const QString &arg1)
{

}

void Customer::on_lineEdit_2_textEdited(const QString &arg1)
{

}

void Customer::on_search_cust_clicked()
{
    My_Sql a;
       a.connect();
       QSqlQueryModel *f = new QSqlQueryModel();
       QSqlQuery zap2 ;
       QString zap2_str= ui->lineEdit_2->text();
       if(!zap2_str.toInt()){
       zap2.prepare("select * from products where products.Авто like ('%"+zap2_str+"%');");

       }
       else {
           zap2.prepare("select * from products where products.Артикул like ('%"+zap2_str+"%'); ");

       }


       zap2.exec();
       f->setQuery(zap2);
       ui->tableView->setModel(f);
       a.discon();


}

