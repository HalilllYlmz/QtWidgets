#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    load();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    save();
    accept();
}


void Dialog::on_buttonBox_rejected()
{
    reject();
}

void Dialog::load()
{
    ui->txtName->setText("");
    ui->spinBoxAge->setValue(0);
    ui->spinBoxQty->setValue(0);

    QFile file("file.dat");

    if(!file.exists()) return;

    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Error", file.errorString());
        return;
    }

    QDataStream stream(&file);

    QString name;
    int age;
    double qty;

    stream >> name;
    stream >> age;
    stream >> qty;
    ui->txtName->setText(name);
    ui->spinBoxAge->setValue(age);
    ui->spinBoxQty->setValue(qty);

    file.close();


}

void Dialog::save()
{
    QFile file("file.dat");
    if(!file.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, "Error", file.errorString());
        return;
    }

    QDataStream stream(&file);
    stream << ui->txtName->text();
    stream << ui->spinBoxAge->value();
    stream << ui->spinBoxQty->value();

    file.close();
    QMessageBox::information(this, "Saved", "We have saved the file !!!");
}

