/********************************************************************************
** Form generated from reading UI file 'WelcomeWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *createButton;
    QPushButton *openButton;
    QPushButton *deleteButton;
    QPushButton *openFolderButton;
    QPushButton *exitButton;
    QTreeWidget *projectView;

    void setupUi(QWidget *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(465, 308);
        verticalLayout = new QVBoxLayout(WelcomeWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        createButton = new QPushButton(WelcomeWindow);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(createButton);

        openButton = new QPushButton(WelcomeWindow);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(openButton);

        deleteButton = new QPushButton(WelcomeWindow);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(deleteButton);

        openFolderButton = new QPushButton(WelcomeWindow);
        openFolderButton->setObjectName(QString::fromUtf8("openFolderButton"));
        openFolderButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(openFolderButton);

        exitButton = new QPushButton(WelcomeWindow);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        projectView = new QTreeWidget(WelcomeWindow);
        projectView->setObjectName(QString::fromUtf8("projectView"));
        projectView->setRootIsDecorated(false);

        verticalLayout->addWidget(projectView);


        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "PK Creator - Welcone screen", nullptr));
        createButton->setText(QCoreApplication::translate("WelcomeWindow", "Create project", nullptr));
        openButton->setText(QCoreApplication::translate("WelcomeWindow", "Open project", nullptr));
        deleteButton->setText(QCoreApplication::translate("WelcomeWindow", "Delete project", nullptr));
        openFolderButton->setText(QCoreApplication::translate("WelcomeWindow", "Open containing folder", nullptr));
        exitButton->setText(QCoreApplication::translate("WelcomeWindow", "Exit", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = projectView->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("WelcomeWindow", "Location", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("WelcomeWindow", "Date", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("WelcomeWindow", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
