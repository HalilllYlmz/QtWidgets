/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *txtDefault;
    QLabel *label_2;
    QLineEdit *txtTest;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QCheckBox *checkBoxEnabled;
    QCheckBox *checkBoxReadOnly;
    QCheckBox *checkBoxClear;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(434, 353);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        txtDefault = new QLineEdit(Dialog);
        txtDefault->setObjectName("txtDefault");

        verticalLayout_2->addWidget(txtDefault);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        txtTest = new QLineEdit(Dialog);
        txtTest->setObjectName("txtTest");

        verticalLayout_2->addWidget(txtTest);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        checkBoxEnabled = new QCheckBox(groupBox);
        checkBoxEnabled->setObjectName("checkBoxEnabled");

        verticalLayout->addWidget(checkBoxEnabled);

        checkBoxReadOnly = new QCheckBox(groupBox);
        checkBoxReadOnly->setObjectName("checkBoxReadOnly");

        verticalLayout->addWidget(checkBoxReadOnly);

        checkBoxClear = new QCheckBox(groupBox);
        checkBoxClear->setObjectName("checkBoxClear");

        verticalLayout->addWidget(checkBoxClear);

        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Test", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Options", nullptr));
        checkBoxEnabled->setText(QCoreApplication::translate("Dialog", "Enabled", nullptr));
        checkBoxReadOnly->setText(QCoreApplication::translate("Dialog", "Read Only", nullptr));
        checkBoxClear->setText(QCoreApplication::translate("Dialog", "Clear Button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
