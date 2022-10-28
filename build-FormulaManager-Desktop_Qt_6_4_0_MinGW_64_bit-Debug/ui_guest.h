/********************************************************************************
** Form generated from reading UI file 'guest.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUEST_H
#define UI_GUEST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guest
{
public:
    QLabel *label;
    QWidget *widget;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *guest)
    {
        if (guest->objectName().isEmpty())
            guest->setObjectName("guest");
        guest->resize(1280, 720);
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Serif")});
        font.setPointSize(24);
        font.setBold(true);
        guest->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/guest.png"), QSize(), QIcon::Normal, QIcon::Off);
        guest->setWindowIcon(icon);
        label = new QLabel(guest);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 211, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(24);
        font1.setBold(true);
        label->setFont(font1);
        widget = new QWidget(guest);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 110, 120, 80));
        label_2 = new QLabel(guest);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 51, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/guest.png")));
        label_2->setScaledContents(true);
        pushButton = new QPushButton(guest);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1180, 680, 91, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font2.setPointSize(12);
        font2.setBold(false);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	background-color:rgb(200, 58, 58)\n"
"}"));

        retranslateUi(guest);

        QMetaObject::connectSlotsByName(guest);
    } // setupUi

    void retranslateUi(QDialog *guest)
    {
        guest->setWindowTitle(QCoreApplication::translate("guest", "Guest", nullptr));
        label->setText(QCoreApplication::translate("guest", "Guest Mode", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("guest", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guest: public Ui_guest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUEST_H
