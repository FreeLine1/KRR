#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"mainwindow.h"
#include <QDialog>

namespace Ui {
class Customer;
}

class Customer : public QDialog
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();  QString djj() const { return m_djj; }
    void setDjj(const QString& djj);

private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_label_4_linkActivated(const QString &link);

    void on_search_cust_clicked();

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    QString m_djj;
     QSqlTableModel *da;
    Ui::Customer *ui;
};

#endif // CUSTOMER_H
