/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QCommandLinkButton *commandLinkButton_5;
    QCommandLinkButton *commandLinkButton_4;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 528);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"border-image: url(:/image/unknown.jpg);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font.setPointSize(12);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	background-color:rgb(200, 58, 58)\n"
"}"));

        gridLayout->addWidget(pushButton_2, 4, 2, 1, 1);

        commandLinkButton_5 = new QCommandLinkButton(centralwidget);
        commandLinkButton_5->setObjectName("commandLinkButton_5");
        commandLinkButton_5->setEnabled(false);

        gridLayout->addWidget(commandLinkButton_5, 2, 4, 1, 1);

        commandLinkButton_4 = new QCommandLinkButton(centralwidget);
        commandLinkButton_4->setObjectName("commandLinkButton_4");
        commandLinkButton_4->setEnabled(false);

        gridLayout->addWidget(commandLinkButton_4, 0, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	background-color: rgb(124, 255, 146);\n"
"}"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        commandLinkButton_3 = new QCommandLinkButton(centralwidget);
        commandLinkButton_3->setObjectName("commandLinkButton_3");
        commandLinkButton_3->setEnabled(false);

        gridLayout->addWidget(commandLinkButton_3, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        commandLinkButton_4->raise();
        pushButton_2->raise();
        commandLinkButton_5->raise();
        pushButton->raise();
        commandLinkButton_3->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FormulaEncyclopedia", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        commandLinkButton_5->setText(QString());
        commandLinkButton_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        commandLinkButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
