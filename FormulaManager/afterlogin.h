#ifndef AFTERLOGIN_H
#define AFTERLOGIN_H

#include <QDialog>
#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include<QMessageBox>
#include <QStackedWidget>

namespace Ui {
class afterLogin;
}

class afterLogin : public QDialog
{
    Q_OBJECT

public:
    explicit afterLogin(QWidget *parent = nullptr);
    ~afterLogin();

private:
    Ui::afterLogin *ui;
};

#endif // AFTERLOGIN_H
