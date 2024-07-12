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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *lblSelectedItem;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(242, 124);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        lblSelectedItem = new QLabel(Dialog);
        lblSelectedItem->setObjectName("lblSelectedItem");

        verticalLayout->addWidget(lblSelectedItem);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnSave = new QPushButton(Dialog);
        btnSave->setObjectName("btnSave");

        horizontalLayout_2->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Select an item", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "Dog", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "Eagle", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "Cat", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Dialog", "Tiger", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Dialog", "Butterfly", nullptr));

        lblSelectedItem->setText(QCoreApplication::translate("Dialog", "Selected Item ", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
