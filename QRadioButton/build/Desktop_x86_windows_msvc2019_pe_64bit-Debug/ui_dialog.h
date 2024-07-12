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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_14;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(530, 360);
        verticalLayout_5 = new QVBoxLayout(Dialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioButton_9 = new QRadioButton(groupBox_3);
        radioButton_9->setObjectName("radioButton_9");

        verticalLayout_3->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupBox_3);
        radioButton_10->setObjectName("radioButton_10");

        verticalLayout_3->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(groupBox_3);
        radioButton_11->setObjectName("radioButton_11");

        verticalLayout_3->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(groupBox_3);
        radioButton_12->setObjectName("radioButton_12");

        verticalLayout_3->addWidget(radioButton_12);


        horizontalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout->addWidget(radioButton_4);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName("radioButton_5");

        verticalLayout_2->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(groupBox_2);
        radioButton_6->setObjectName("radioButton_6");

        verticalLayout_2->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupBox_2);
        radioButton_7->setObjectName("radioButton_7");

        verticalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupBox_2);
        radioButton_8->setObjectName("radioButton_8");

        verticalLayout_2->addWidget(radioButton_8);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout);

        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        radioButton_13 = new QRadioButton(groupBox_4);
        radioButton_13->setObjectName("radioButton_13");

        verticalLayout_4->addWidget(radioButton_13);

        radioButton_15 = new QRadioButton(groupBox_4);
        radioButton_15->setObjectName("radioButton_15");

        verticalLayout_4->addWidget(radioButton_15);

        radioButton_14 = new QRadioButton(groupBox_4);
        radioButton_14->setObjectName("radioButton_14");

        verticalLayout_4->addWidget(radioButton_14);


        verticalLayout_5->addWidget(groupBox_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "Syrup", nullptr));
        radioButton_9->setText(QCoreApplication::translate("Dialog", "Caramel", nullptr));
        radioButton_10->setText(QCoreApplication::translate("Dialog", "Fudge", nullptr));
        radioButton_11->setText(QCoreApplication::translate("Dialog", "Cherry", nullptr));
        radioButton_12->setText(QCoreApplication::translate("Dialog", "Strawberry", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Ice Cream", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Vanillia", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Chocolate", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Strawberry", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Dialog", "Special", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "Toppings", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Dialog", "Nuts", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Dialog", "Sprinkles", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Dialog", "Fruit", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Dialog", "Candy", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Dialog", "Size", nullptr));
        radioButton_13->setText(QCoreApplication::translate("Dialog", "Small", nullptr));
        radioButton_15->setText(QCoreApplication::translate("Dialog", "Medium", nullptr));
        radioButton_14->setText(QCoreApplication::translate("Dialog", "Large", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
