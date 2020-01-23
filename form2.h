#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include"mainwindow.h"
namespace Ui {
class Form2;
}



class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_registration2_clicked();

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

private:
    Ui::Form2 *ui;
};

#endif // FORM2_H
