#include "login.h"
#include "ui_login.h"

#include "admin.h"
#include "user.h"
#include "guest.h"

Login::Login(QWidget *parent) : QDialog(parent),
                                ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->comboBox->setPlaceholderText("Select UserType");
    ui->comboBox->setCurrentIndex(-1);
    ui->comboBox->addItem(QIcon(":/image/admin.png"), "Admin");
    ui->comboBox->addItem(QIcon(":/image/user.png"), "User");
    ui->comboBox->addItem(QIcon(":/image/guest.png"), "Guest");
    ui->username->setPlaceholderText("Enter Username");
    ui->password->setPlaceholderText("Enter Password");
}
Login::~Login()
{
    delete ui;
}

void Login::on_loginBtn_clicked()
{
    // MySql Connection
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL", "MyConnect");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("login");

    QString username = ui->username->text();
    QString password = ui->password->text();
    QString type = ui->comboBox->currentText();

    if (db.open())
    {
        // Creating Queries
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("Select * from credentials where username = :username AND password= :password AND type = :type"));
        query.bindValue(":username", username);
        query.bindValue(":password", password);
        query.bindValue(":type", type);

        if (!query.exec())
        {
            QMessageBox::information(this, "Failed", "Query Failed To  Execute");
        }
        else
        {
            if (type == "")
            {
                QMessageBox::information(this, "UserType Not Selected", "Please select a UserType!!");
            }
            else if (type == "Guest")
            {
                QPixmap login_success(":/image/login_success_resized");
                QMessageBox msgBox;
                msgBox.setWindowTitle("Login Success");
                msgBox.setText("Logged in as Guest");
                msgBox.setIconPixmap(login_success);
                msgBox.exec();
                close();
                guest guest_obj;
                guest_obj.setModal(true);
                guest_obj.exec();
            }

            else if (type == "Admin")
            {
                if (username == name && password == pass)
                {
                    // login for admin
                    ui->username->clear();
                    QPixmap login_success(":/image/login_success_resized");
                    QMessageBox msgBox;
                    msgBox.setWindowTitle("Login Success");
                    msgBox.setText("Logged in as Admin");
                    msgBox.setIconPixmap(login_success);
                    msgBox.exec();
                    this->exec();
                    close();
                    admin admin_obj;
                    admin_obj.setModal(true);
                    admin_obj.exec();
                }
                else if (username != name && password == pass)
                {
                    QMessageBox::information(this, "Login Failed", "Incorrect Username !!");

                    ui->username->clear();
                    ui->password->clear();
                }

                else if (username == name && password != pass)
                {
                    QMessageBox::information(this, "Login Failed", "Incorrect Password !!");
                    ui->password->clear();
                }

                else if (username != name && password != pass)
                {
                    QMessageBox::information(this, "Login Failed", "Incorrect Username and Password !!");
                    ui->username->clear();
                    ui->password->clear();
                }
            }
            else if (type == "User")
            {
                while (query.next())
                {
                    QString usernameFromDB = query.value(0).toString();
                    QString passwordFromDB = query.value(1).toString();
                    if (usernameFromDB == username && passwordFromDB == password)
                    {
                        // login for user
                        QPixmap login_success(":/image/login_success_resized");
                        QMessageBox msgBox;
                        msgBox.setWindowTitle("Login Success");
                        msgBox.setText("Logged in as User");
                        msgBox.setIconPixmap(login_success);
                        msgBox.exec();
                        close();
                        user user_obj;
                        user_obj.setModal(true);
                        user_obj.exec();
                    }
                    else if (username != usernameFromDB && password == passwordFromDB)
                    {
                        QMessageBox::information(this, "Login Failed", "Incorrect Username !!");

                        ui->username->clear();
                        ui->password->clear();
                    }
                    else if (usernameFromDB == username && password != passwordFromDB)
                    {
                        QMessageBox::information(this, "Login Failed", "Incorrect Password !!");
                        ui->password->clear();
                    }
                    else if (username != usernameFromDB && password != passwordFromDB)
                    {
                        QMessageBox::information(this, "Login Failed", "Incorrect Username and Password !!");
                        ui->username->clear();
                        ui->password->clear();
                    }
                }
            }
        }
    }
    else
    {
        QMessageBox::information(this, "Database failed", "Database Connection Failed");
    }
}
