/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionNew_Project;
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(800, 600);
        MainWindowClass->setMinimumSize(QSize(800, 600));
        MainWindowClass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionNew_Project = new QAction(MainWindowClass);
        actionNew_Project->setObjectName(QString::fromUtf8("actionNew_Project"));
        actionOpen_Project = new QAction(MainWindowClass);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        actionSave_Project = new QAction(MainWindowClass);
        actionSave_Project->setObjectName(QString::fromUtf8("actionSave_Project"));
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindowClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_Project);
        menuFile->addAction(actionOpen_Project);
        menuFile->addAction(actionSave_Project);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "PK Creator ", nullptr));
        actionNew_Project->setText(QCoreApplication::translate("MainWindowClass", "New Project", nullptr));
        actionOpen_Project->setText(QCoreApplication::translate("MainWindowClass", "Open Project", nullptr));
        actionSave_Project->setText(QCoreApplication::translate("MainWindowClass", "Save Project", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindowClass", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindowClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
