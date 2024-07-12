#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QCoreApplication::setOrganizationName("MyOrganization");
    QCoreApplication::setApplicationName("MyApplication");

    init();
    load();

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnSave_clicked()
{
    QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());
    settings.setValue("settings", ui->comboBox->currentIndex());

    QMessageBox::information(this, "Saved", "Selection saved, please close and re-open the application");
}


void Dialog::on_comboBox_currentIndexChanged(int index)
{
    ui->lblSelectedItem->setText(QString::number(index) + " " + ui->comboBox->currentText());
}





