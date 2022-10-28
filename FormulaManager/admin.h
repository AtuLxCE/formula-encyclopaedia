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

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
