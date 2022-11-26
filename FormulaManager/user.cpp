#include "user.h"
#include "ui_user.h"

QString subject;
QString title;

user::user(QWidget *parent) : QDialog(parent),
                              ui(new Ui::user)
{
    ui->setupUi(this);
    ui->comboBox->setPlaceholderText("                                                                                        Select Subject");
    ui->comboBox->setCurrentIndex(-1);
    ui->comboBox->addItem("Applied Mechanics");
    ui->comboBox->addItem("Engineering Chemistry");
    ui->comboBox->addItem("Electric Circuit Theory");
    ui->comboBox->addItem("Electromagnetism");
    ui->comboBox->addItem("Engineering Math");
    ui->comboBox->addItem("Engineering Physics");
}

user::~user()
{
    delete ui;
}


void user::on_pushButton_applied_mechanics_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    // connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Run our insert Query
        QSqlQuery qry;

        qry.prepare("select * from applied");

        if (!qry.exec())
        {
            QMessageBox::information(this, "Applied", "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->listWidget->setViewMode(QListWidget::IconMode);
                ui->listWidget->setIconSize(QSize(400, 500));
                ui->listWidget->setResizeMode(QListWidget::Adjust);
                QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB), QString(nameFromDB));
                item->setTextAlignment(Qt::AlignCenter);
                ui->listWidget->addItem(item);
                ui->listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
                ui->listWidget->setStyleSheet("QListWidget {padding: 10px;} QListWidget::item { margin: 10px; }");
                ui->listWidget->setStyleSheet("QListWidget:item {border-bottom: 2px solid black;}QListWidget{background-color: white;}");
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_pushButton_engineering_chemistry_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    // connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Run our insert Query
        QSqlQuery qry;

        qry.prepare("select * from chemistry");

        if (!qry.exec())
        {
            QMessageBox::information(this, "Chemistry", "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->listWidget_2->setViewMode(QListWidget::IconMode);
                ui->listWidget_2->setIconSize(QSize(400, 400));
                ui->listWidget_2->setResizeMode(QListWidget::Adjust);
                QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB), QString(nameFromDB));
                ui->listWidget_2->addItem(item);
                ui->listWidget_2->setDragDropMode(QAbstractItemView::NoDragDrop);
                ui->listWidget_2->setStyleSheet("QListWidget {padding: 10px;} QListWidget::item { margin: 10px; }");
                ui->listWidget_2->setStyleSheet("QListWidget:item {border-bottom: 2px solid black;}QListWidget{background-color: white;}");
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_pushButton_electric_circuit_theory_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    // connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Run our insert Query
        QSqlQuery qry;

        qry.prepare("select * from ECT");

        if (!qry.exec())
        {
            QMessageBox::information(this, "ECT", "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->listWidget_3->setViewMode(QListWidget::IconMode);
                ui->listWidget_3->setIconSize(QSize(400, 400));
                ui->listWidget_3->setResizeMode(QListWidget::Adjust);
                QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB), QString(nameFromDB));
                ui->listWidget_3->addItem(item);
                ui->listWidget_3->setDragDropMode(QAbstractItemView::NoDragDrop);
                ui->listWidget_3->setStyleSheet("QListWidget {padding: 10px;} QListWidget::item { margin: 10px; }");
                ui->listWidget_3->setStyleSheet("QListWidget:item {border-bottom: 2px solid black;}QListWidget{background-color: white;}");
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_pushButton_electromagnetism_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    // connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Run our insert Query
        QSqlQuery qry;

        qry.prepare("select * from EM");

        if (!qry.exec())
        {
            QMessageBox::information(this, "EM", "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->listWidget_4->setViewMode(QListWidget::IconMode);
                ui->listWidget_4->setIconSize(QSize(400, 400));
                ui->listWidget_4->setResizeMode(QListWidget::Adjust);
                QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB), QString(nameFromDB));
                ui->listWidget_4->addItem(item);
                ui->listWidget_4->setDragDropMode(QAbstractItemView::NoDragDrop);
                ui->listWidget_4->setStyleSheet("QListWidget {padding: 10px;} QListWidget::item { margin: 10px; }");
                ui->listWidget_4->setStyleSheet("QListWidget:item {border-bottom: 2px solid black;}QListWidget{background-color: white;}");
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_pushButton_engineering_math_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    // connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Run our insert Query
        QSqlQuery qry;

        qry.prepare("select * from math");

        if (!qry.exec())
        {
            QMessageBox::information(this, "Math", "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->listWidget_5->setViewMode(QListWidget::IconMode);
                ui->listWidget_5->setIconSize(QSize(400, 400));
                ui->listWidget_5->setResizeMode(QListWidget::Adjust);
                QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB), QString(nameFromDB));
                ui->listWidget_5->addItem(item);
                ui->listWidget_5->setDragDropMode(QAbstractItemView::NoDragDrop);
                ui->listWidget_5->setStyleSheet("QListWidget {padding: 10px;} QListWidget::item { margin: 10px; }");
                ui->listWidget_5->setStyleSheet("QListWidget:item {border-bottom: 2px solid black;}QListWidget{background-color: white;}");
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_pushButton_engineering_physics_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    // connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Run our insert Query
        QSqlQuery qry;

        qry.prepare("select * from physics");

        if (!qry.exec())
        {
            QMessageBox::information(this, "Physics", "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->listWidget_6->setViewMode(QListWidget::IconMode);
                ui->listWidget_6->setIconSize(QSize(400, 400));
                ui->listWidget_6->setResizeMode(QListWidget::Adjust);
                QListWidgetItem *item = new QListWidgetItem(QIcon(pathFromDB), QString(nameFromDB));
                ui->listWidget_6->addItem(item);
                ui->listWidget_6->setDragDropMode(QAbstractItemView::NoDragDrop);
                ui->listWidget_6->setStyleSheet("QListWidget {padding: 10px;} QListWidget::item { margin: 10px; }");
                ui->listWidget_6->setStyleSheet("QListWidget:item {border-bottom: 2px solid black;}QListWidget{background-color: white;}");
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_pushButton_go_back_1_clicked()
{

    ui->listWidget->clear();
    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_pushButton_go_back_2_clicked()
{

    ui->listWidget_2->clear();
    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_pushButton_go_back_3_clicked()
{

    ui->listWidget_3->clear();
    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_pushButton_go_back_4_clicked()
{

    ui->listWidget_4->clear();
    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_pushButton_go_back_5_clicked()
{

    ui->listWidget_5->clear();
    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_pushButton_go_back_6_clicked()
{

    ui->listWidget_6->clear();
    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_comboBox_activated(int index = 0)
{
    index =index + 0;
    subject = ui->comboBox->currentText();
    ui->stackedWidget_2->setCurrentIndex(1);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        QSqlQuery qry;
        // Run our insert Query
        if (subject == "Applied Mechanics")
        {

            qry.prepare("select * from applied");
        }
        else if (subject == "Engineering Chemistry")
        {

            qry.prepare("select * from chemistry");
        }
        else if (subject == "Electric Circuit Theory")
        {

            qry.prepare("select * from ect");
        }
        else if (subject == "Electromagnetism")
        {

            qry.prepare("select * from em");
        }
        else if (subject == "Engineering Math")
        {

            qry.prepare("select * from math");
        }
        else if (subject == "Engineering Physics")
        {

            qry.prepare("select * from physics");
        }

        if (!qry.exec())
        {
            QMessageBox::information(this, subject, "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();
                ui->comboBox_2->setPlaceholderText("                                                                          Select Formula");
                ui->comboBox_2->setCurrentIndex(-1);
                ui->comboBox_2->addItem(nameFromDB);
            }
        }
    }

    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
    database.close();
}

void user::on_comboBox_2_activated(int index = 0)
{
    index =index + 0;
    title = ui->comboBox_2->currentText();
    ui->stackedWidget->setCurrentIndex(7);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("formula");

    if (database.open())
    {
        // Retrieve Data from input fields
        QString name;
        QString path;

        // Run our insert Query
        QSqlQuery qry;

        if (subject == "Applied Mechanics")
        {

            qry.prepare("select * from applied");
        }
        else if (subject == "Engineering Chemistry")
        {

            qry.prepare("select * from chemistry");
        }
        else if (subject == "Electric Circuit Theory")
        {

            qry.prepare("select * from ect");
        }
        else if (subject == "Electromagnetism")
        {

            qry.prepare("select * from em");
        }
        else if (subject == "Engineering Math")
        {

            qry.prepare("select * from math");
        }
        else if (subject == "Engineering Physics")
        {

            qry.prepare("select * from physics");
        }

        if (!qry.exec())
        {
            QMessageBox::information(this, subject, "Query Failed To  Execute");
        }
        else
        {

            while (qry.next())
            {
                QString nameFromDB = qry.value(0).toString();
                QString pathFromDB = qry.value(1).toString();

                if (nameFromDB == title)
                {

                    QPixmap pix(pathFromDB);
                    ui->label_5->setPixmap(pix);
                    ui->label_5->setAlignment(Qt::AlignCenter);
                }
            }
        }
    }

    database.close();
}

void user::on_pushButton_back_clicked()
{

    database.close();
    ui->comboBox_2->clear();
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
}

void user::on_pushButton_logout_clicked()
{

    database.close();
    close();
}


void user::on_pushButton_go_back_7_clicked()
{

    database.close();
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->comboBox->setCurrentIndex(-1);
    ui->comboBox_2->clear();
}

