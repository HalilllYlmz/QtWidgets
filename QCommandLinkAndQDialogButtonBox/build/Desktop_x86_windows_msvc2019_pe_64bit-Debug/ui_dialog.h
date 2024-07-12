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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(315, 319);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        commandLinkButton = new QCommandLinkButton(Dialog);
        commandLinkButton->setObjectName("commandLinkButton");

        verticalLayout->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(Dialog);
        commandLinkButton_2->setObjectName("commandLinkButton_2");

        verticalLayout->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(Dialog);
        commandLinkButton_3->setObjectName("commandLinkButton_3");

        verticalLayout->addWidget(commandLinkButton_3);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Dialog", "Option 1", nullptr));
        commandLinkButton->setDescription(QCoreApplication::translate("Dialog", "This is option 1", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("Dialog", "Option 2", nullptr));
        commandLinkButton_2->setDescription(QCoreApplication::translate("Dialog", "This is option 2", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("Dialog", "Option 3", nullptr));
        commandLinkButton_3->setDescription(QCoreApplication::translate("Dialog", "This is option 3", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
