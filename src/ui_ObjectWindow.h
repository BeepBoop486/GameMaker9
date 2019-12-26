/********************************************************************************
** Form generated from reading UI file 'ObjectWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTWINDOW_H
#define UI_OBJECTWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectWindow
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QListView *eventList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *removeButton;
    QGridLayout *gridLayout;
    QComboBox *spriteBox;
    QLineEdit *nameEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *okButton;
    QLabel *spriteLabel;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addSprButton;
    QPushButton *editSprButton;

    void setupUi(QWidget *ObjectWindow)
    {
        if (ObjectWindow->objectName().isEmpty())
            ObjectWindow->setObjectName(QString::fromUtf8("ObjectWindow"));
        ObjectWindow->resize(512, 340);
        ObjectWindow->setMinimumSize(QSize(512, 300));
        ObjectWindow->setMaximumSize(QSize(512, 16777215));
        ObjectWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_2 = new QGridLayout(ObjectWindow);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        eventList = new QListView(ObjectWindow);
        eventList->setObjectName(QString::fromUtf8("eventList"));
        eventList->setMinimumSize(QSize(0, 0));
        eventList->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(eventList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addButton = new QPushButton(ObjectWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_2->addWidget(addButton);

        editButton = new QPushButton(ObjectWindow);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout_2->addWidget(editButton);

        removeButton = new QPushButton(ObjectWindow);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout_2->addWidget(removeButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spriteBox = new QComboBox(ObjectWindow);
        spriteBox->setObjectName(QString::fromUtf8("spriteBox"));
        spriteBox->setMinimumSize(QSize(125, 0));
        spriteBox->setMaximumSize(QSize(125, 16777215));

        gridLayout->addWidget(spriteBox, 1, 1, 1, 1);

        nameEdit = new QLineEdit(ObjectWindow);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(125, 0));
        nameEdit->setMaximumSize(QSize(125, 16777215));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        okButton = new QPushButton(ObjectWindow);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(0, 0));
        okButton->setMaximumSize(QSize(83, 16777215));

        gridLayout->addWidget(okButton, 4, 0, 1, 1);

        spriteLabel = new QLabel(ObjectWindow);
        spriteLabel->setObjectName(QString::fromUtf8("spriteLabel"));

        gridLayout->addWidget(spriteLabel, 1, 0, 1, 1);

        nameLabel = new QLabel(ObjectWindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        addSprButton = new QPushButton(ObjectWindow);
        addSprButton->setObjectName(QString::fromUtf8("addSprButton"));
        addSprButton->setMinimumSize(QSize(50, 0));
        addSprButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(addSprButton);

        editSprButton = new QPushButton(ObjectWindow);
        editSprButton->setObjectName(QString::fromUtf8("editSprButton"));
        editSprButton->setMinimumSize(QSize(50, 0));
        editSprButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(editSprButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ObjectWindow);

        QMetaObject::connectSlotsByName(ObjectWindow);
    } // setupUi

    void retranslateUi(QWidget *ObjectWindow)
    {
        ObjectWindow->setWindowTitle(QCoreApplication::translate("ObjectWindow", "ObjectWindow", nullptr));
        addButton->setText(QCoreApplication::translate("ObjectWindow", "Add Event", nullptr));
        editButton->setText(QCoreApplication::translate("ObjectWindow", "Edit Code", nullptr));
        removeButton->setText(QCoreApplication::translate("ObjectWindow", "Remove Event", nullptr));
        okButton->setText(QCoreApplication::translate("ObjectWindow", "Ok", nullptr));
        spriteLabel->setText(QCoreApplication::translate("ObjectWindow", "Sprite:", nullptr));
        nameLabel->setText(QCoreApplication::translate("ObjectWindow", "Object name:", nullptr));
        addSprButton->setText(QCoreApplication::translate("ObjectWindow", "Add", nullptr));
        editSprButton->setText(QCoreApplication::translate("ObjectWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectWindow: public Ui_ObjectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTWINDOW_H
