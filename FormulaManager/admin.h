#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QStackedWidget>

namespace Ui
{
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

    void on_pushButton_logout_clicked();

    void on_pushButton_register_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_view_clicked();

    void on_pushButton_go_back_3_clicked();

    void on_pushButton_go_back_2_clicked();

    void on_pushButton_go_back_clicked();

    void on_loginBtn_delete_clicked();



private:
    Ui::admin *ui;
    QSqlDatabase database;
    QSqlQueryModel *qm;
};

#endif // ADMIN_H
