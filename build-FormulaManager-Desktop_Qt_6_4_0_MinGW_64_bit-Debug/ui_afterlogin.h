/********************************************************************************
** Form generated from reading UI file 'afterlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTERLOGIN_H
#define UI_AFTERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_afterLogin
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_6;
    QPushButton *pushButton_2;
    QWidget *page_5;
    QPushButton *pushButton;
    QWidget *page_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QLabel *label_6;

    void setupUi(QDialog *afterLogin)
    {
        if (afterLogin->objectName().isEmpty())
            afterLogin->setObjectName("afterLogin");
        afterLogin->resize(893, 610);
        stackedWidget = new QStackedWidget(afterLogin);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 150, 893, 451));
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        pushButton_2 = new QPushButton(page_6);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 150, 93, 29));
        stackedWidget->addWidget(page_6);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 100, 93, 29));
        stackedWidget->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        stackedWidget->addWidget(page_7);
        layoutWidget = new QWidget(afterLogin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 401, 151));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"border-image: url(:/image/admin.jpg)\n"
"}"));

        horizontalLayout_4->addWidget(widget);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Serif")});
        font.setPointSize(24);
        font.setBold(true);
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);


        retranslateUi(afterLogin);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(afterLogin);
    } // setupUi

    void retranslateUi(QDialog *afterLogin)
    {
        afterLogin->setWindowTitle(QCoreApplication::translate("afterLogin", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("afterLogin", "2nd page", nullptr));
        pushButton->setText(QCoreApplication::translate("afterLogin", "1st page", nullptr));
        label_6->setText(QCoreApplication::translate("afterLogin", "Admin mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class afterLogin: public Ui_afterLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTERLOGIN_H
