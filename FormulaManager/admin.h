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

private:
    Ui::admin *ui;
    QSqlDatabase database;
};

#endif // ADMIN_H
