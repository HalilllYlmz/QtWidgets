#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->checkBoxEnabled->setChecked(ui->txtTest->isEnabled());
    ui->checkBoxReadOnly->setChecked(ui->txtTest->isReadOnly());
    ui->checkBoxClear->setChecked(ui->txtTest->isClearButtonEnabled());

    QMetaEnum metaEnum = QMetaEnum::fromType<QLineEdit::EchoMode>();
    for(int i = 0; i < metaEnum.keyCount(); i++) {
        ui->comboBox->addItem(metaEnum.valueToKey(i), metaEnum.value(i));
    }

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_comboBox_currentIndexChanged(int index)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QLineEdit::EchoMode>();
    int value = metaEnum.keyToValue(ui->comboBox->currentText().toLocal8Bit().data());
    QLineEdit::EchoMode mode = static_cast<QLineEdit::EchoMode>(value);
    ui->txtTest->setEchoMode(mode);
}


void Dialog::on_checkBoxEnabled_toggled(bool checked)
{
    ui->txtTest->setEnabled(checked);
}


void Dialog::on_txtDefault_textChanged(const QString &arg1)
{
    ui->txtTest->setText(arg1);
}


void Dialog::on_checkBoxReadOnly_toggled(bool checked)
{
    ui->txtTest->setReadOnly(checked);
}


void Dialog::on_checkBoxClear_toggled(bool checked)
{
ui->txtTest->setClearButtonEnabled(checked);
}


void Dialog::on_buttonBox_accepted()
{
    QMessageBox::information(this, "Entered", "You entered " + ui->txtTest->text());
    accept();
}



