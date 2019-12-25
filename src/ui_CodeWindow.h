/********************************************************************************
** Form generated from reading UI file 'CodeWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEWINDOW_H
#define UI_CODEWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CodeWindow
{
public:
    QAction *actionOk;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSaveAs;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CodeWindow)
    {
        if (CodeWindow->objectName().isEmpty())
            CodeWindow->setObjectName(QString::fromUtf8("CodeWindow"));
        CodeWindow->resize(557, 450);
        actionOk = new QAction(CodeWindow);
        actionOk->setObjectName(QString::fromUtf8("actionOk"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CodeWindow/res/okIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOk->setIcon(icon);
        actionSave = new QAction(CodeWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CodeWindow/res/saveIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionOpen = new QAction(CodeWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CodeWindow/res/openIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionCut = new QAction(CodeWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CodeWindow/res/cutIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(CodeWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CodeWindow/res/copyIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(CodeWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CodeWindow/res/pasteIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionSaveAs = new QAction(CodeWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CodeWindow/res/saveAsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon6);
        centralwidget = new QWidget(CodeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CodeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CodeWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 557, 21));
        CodeWindow->setMenuBar(menubar);
        toolBar = new QToolBar(CodeWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setLocale(QLocale(QLocale::Embu, QLocale::Kenya));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::NoToolBarArea);
        toolBar->setIconSize(QSize(24, 24));
        toolBar->setFloatable(false);
        CodeWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(CodeWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CodeWindow->setStatusBar(statusBar);

        toolBar->addSeparator();
        toolBar->addAction(actionOk);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);

        retranslateUi(CodeWindow);

        QMetaObject::connectSlotsByName(CodeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CodeWindow)
    {
        CodeWindow->setWindowTitle(QCoreApplication::translate("CodeWindow", "MainWindow", nullptr));
        actionOk->setText(QCoreApplication::translate("CodeWindow", "Ok", nullptr));
        actionSave->setText(QCoreApplication::translate("CodeWindow", "Save", nullptr));
        actionOpen->setText(QCoreApplication::translate("CodeWindow", "Open", nullptr));
        actionCut->setText(QCoreApplication::translate("CodeWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("CodeWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("CodeWindow", "Paste", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("CodeWindow", "SaveAs", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("CodeWindow", "Save As...", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("CodeWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeWindow: public Ui_CodeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEWINDOW_H
