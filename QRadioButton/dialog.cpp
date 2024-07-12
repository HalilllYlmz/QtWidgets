#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString iceCream = getOption(ui->groupBox);
    QString toppings = getOption(ui->groupBox_2);
    QString syrup = getOption(ui->groupBox_3);
    QString size = getOption(ui->groupBox_4);

    QString order;
    order += "Order: \r\n";
    order += "Size: " + size + "\r\n";
    order += "Flavor: " + iceCream + "\r\n";
    order += "Topping: " + toppings+ "\r\n";
    order += "Syrup: " + syrup+ "\r\n";

    QMessageBox::information(this, "Order", order);

accept();
}


void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::critical(this, "WHAT!!!", "You do not want icecream ???");
    reject();
}

QString Dialog::getOption(QObject *obj)
{
    QString value = "None";
    QList<QRadioButton*> list = obj->findChildren<QRadioButton*>(QString(), Qt::FindDirectChildrenOnly);

    foreach(QRadioButton* radioButton, list) {
        if(radioButton->isChecked()) {
            value = radioButton->text();
            break;
        }
    }

    return value;

}

