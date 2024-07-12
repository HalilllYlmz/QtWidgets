#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    init();
    load();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::init()
{
    ui->comboBox->setEnabled(true);
    ui->buttonBox->addButton("Clear", QDialogButtonBox::ButtonRole::ActionRole);
    ui->buttonBox->addButton("Remove", QDialogButtonBox::ButtonRole::ActionRole);
}

void Dialog::load()
{
    QSettings settings("YourOrganization", "YourApplication");

    ui->comboBox->setCurrentText(settings.value("text", "").toString());

    int combosize = settings.beginReadArray("combo");
    for(int i = 0; i < combosize; i++) {
        settings.setArrayIndex(i);
        ui->comboBox->addItem(settings.value("item", "").toString());
    }
    settings.endArray();

    int listSize = settings.beginReadArray("list");
    for(int i = 0; i < listSize; i++) {
        settings.setArrayIndex(i);
        ui->listWidget->addItem(settings.value("item", "").toString());
    }
    settings.endArray();

}


void Dialog::save()
{
    qDebug() << "Saving settings...";
    QSettings settings("YourOrganization", "YourApplication");
    settings.clear();

    settings.setValue("text", ui->comboBox->currentText());
    settings.beginWriteArray("combo");
    for(int i = 0; i < ui->comboBox->count(); i++) {
        settings.setArrayIndex(i);
        settings.setValue("item", ui->comboBox->itemText(i));
        qDebug() << "Saving combo item:" << ui->comboBox->itemText(i);  // Hata ayıklama satırı
    }
    settings.endArray();

    settings.beginWriteArray("list");
    for(int i = 0; i < ui->listWidget->count(); i++) {
        settings.setArrayIndex(i);
        settings.setValue("item", ui->listWidget->item(i)->text());
        qDebug() << "Saving list item:" << ui->listWidget->item(i)->text();  // Hata ayıklama satırı
    }
    settings.endArray();

    qDebug() << "Settings saved.";

}

void Dialog::on_btnAdd_clicked()
{
    if(ui->comboBox->findText(ui->comboBox->currentText()) < 0 ) {
        ui->comboBox->addItem(ui->comboBox->currentText());
    }
    ui->listWidget->addItem(ui->comboBox->currentText());
}


void Dialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button->text().contains("OK")) {
        save();
        accept();
        return;
    }

    if(button->text().contains("Cancel")) {
        reject();
        return;
    }

    if(button->text().contains("Clear")) {
        ui->comboBox->clear();
        ui->listWidget->clear();
        return;
    }

    if(button->text().contains("Remove")) {
        QList<QListWidgetItem*> items = ui->listWidget->selectedItems();
        foreach(QListWidgetItem* item, items) {
            ui->listWidget->removeItemWidget(item);
            delete item;
        }
    }

}

