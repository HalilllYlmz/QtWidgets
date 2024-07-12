#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",QRegularExpression::CaseInsensitiveOption);

    ui->lineEdit_4->setValidator(new QRegularExpressionValidator(rx, this));
    connect(ui->lineEdit_4, &QLineEdit::textChanged, this, &Dialog::checkInput);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    if(ui->lineEdit_4->hasAcceptableInput()) {
        QMessageBox::information(this, "Email", ui->lineEdit_4->text());
        accept();
    }else {
        QMessageBox::critical(this, "Email", "Not valid !!!");
    }
}


void Dialog::on_buttonBox_rejected()
{
    reject();
}

void Dialog::checkInput()
{
    if(ui->lineEdit_4->hasAcceptableInput()) {
        ui->lineEdit_4->setStyleSheet("QLineEdit {color: black;} ");
    }else {
        ui->lineEdit_4->setStyleSheet("QLineEdit {color: red;} ");
    }
}

