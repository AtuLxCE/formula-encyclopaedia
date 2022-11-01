#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_pushButton_clicked()
{
    close();
}


void user::on_pushButton_2_clicked()
{
        ui->stackedWidget->setCurrentIndex(1);
        //connecting to mysql database
        database = QSqlDatabase::addDatabase("QMYSQL");
        database.setHostName("localhost");
        database.setUserName("root");
        database.setPassword("password");
        database.setDatabaseName("formula");

        if (database.open()){
            //Retrieve Data from input fields
            QString name;
            QString path;

            //Run our insert Query
            QSqlQuery qry;

            qry.prepare("select * from applied");

            if(!qry.exec()){
                QMessageBox::information(this,"Failed","Query Failed To  Execute");
            }
            else{

                while (qry.next()){
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                    ui->listWidget->setViewMode (QListWidget::IconMode);
                    ui->listWidget->setIconSize(QSize(500,500));
                    ui-> listWidget->setResizeMode(QListWidget::Adjust);
                    QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB),QString(nameFromDB));
                    ui->listWidget->addItem(item);
                        }
            }
        }

        else{
           QMessageBox::information(this,"Not Connected","Database is not connected");
        }

    }


void user::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void user::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}




void user::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void user::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void user::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void user::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_10_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_13_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

