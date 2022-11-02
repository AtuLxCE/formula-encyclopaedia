#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QStackedWidget>

namespace Ui
{
    class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginBtn_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase database;
    QString name = "admin";
    QString pass = "abny</>2077";
};

#endif // LOGIN_H
