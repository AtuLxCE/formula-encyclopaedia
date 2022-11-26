#ifndef GUEST_H
#define GUEST_H

#include <QDialog>

namespace Ui
{
    class guest;
}

class guest : public QDialog
{
    Q_OBJECT

public:
    explicit guest(QWidget *parent = nullptr);
    ~guest();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_view_formula_clicked();

    void on_pushButton_go_back_clicked();

private:
    Ui::guest *ui;
};

#endif // GUEST_H
