#ifndef USER_H
#define USER_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QStackedWidget>

namespace Ui
{
    class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:

    void on_pushButton_applied_mechanics_clicked();

    void on_pushButton_engineering_chemistry_clicked();

    void on_pushButton_electric_circuit_theory_clicked();

    void on_pushButton_electromagnetism_clicked();

    void on_pushButton_engineering_math_clicked();

    void on_pushButton_engineering_physics_clicked();

    void on_pushButton_go_back_1_clicked();

    void on_pushButton_go_back_2_clicked();

    void on_pushButton_go_back_3_clicked();

    void on_pushButton_go_back_4_clicked();

    void on_pushButton_go_back_5_clicked();

    void on_pushButton_go_back_6_clicked();

    void on_comboBox_activated(int index);

    void on_comboBox_2_activated(int index);

    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_go_back_7_clicked();


private:
    Ui::user *ui;
    QSqlDatabase database;
    QSqlQueryModel *qm;
};

#endif // USER_H
