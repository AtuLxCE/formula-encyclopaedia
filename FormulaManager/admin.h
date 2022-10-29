#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include<QMessageBox>
#include <QStackedWidget>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_loginBtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_loginBtn_3_clicked();

private:
    Ui::admin *ui;
    QSqlDatabase database;
    QSqlQueryModel *qm;
};

#endif // ADMIN_H
