/********************************************************************************
** Form generated from reading UI file 'SpriteWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRITEWINDOW_H
#define UI_SPRITEWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpriteWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *textureLabel;
    QSpacerItem *verticalSpacer;
    QLineEdit *nameEdit;
    QComboBox *textureBox;
    QLabel *nameLabel;
    QPushButton *okButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addButton;
    QPushButton *editButton;
    QLabel *centerLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *xLabel;
    QLineEdit *centerXEdit;
    QLabel *yLabel;
    QLineEdit *centerYEdit;
    QGridLayout *gridLayout_2;
    QLabel *imageLabel;

    void setupUi(QWidget *SpriteWindow)
    {
        if (SpriteWindow->objectName().isEmpty())
            SpriteWindow->setObjectName(QString::fromUtf8("SpriteWindow"));
        SpriteWindow->resize(229, 160);
        SpriteWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        horizontalLayout = new QHBoxLayout(SpriteWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textureLabel = new QLabel(SpriteWindow);
        textureLabel->setObjectName(QString::fromUtf8("textureLabel"));

        gridLayout->addWidget(textureLabel, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        nameEdit = new QLineEdit(SpriteWindow);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        nameEdit->setMinimumSize(QSize(100, 0));
        nameEdit->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(nameEdit, 0, 2, 1, 1);

        textureBox = new QComboBox(SpriteWindow);
        textureBox->setObjectName(QString::fromUtf8("textureBox"));

        gridLayout->addWidget(textureBox, 1, 2, 1, 1);

        nameLabel = new QLabel(SpriteWindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        okButton = new QPushButton(SpriteWindow);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(okButton, 5, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        addButton = new QPushButton(SpriteWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);
        addButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(addButton);

        editButton = new QPushButton(SpriteWindow);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        sizePolicy1.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy1);
        editButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(editButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        centerLabel = new QLabel(SpriteWindow);
        centerLabel->setObjectName(QString::fromUtf8("centerLabel"));
        centerLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(centerLabel, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        xLabel = new QLabel(SpriteWindow);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(xLabel->sizePolicy().hasHeightForWidth());
        xLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(xLabel);

        centerXEdit = new QLineEdit(SpriteWindow);
        centerXEdit->setObjectName(QString::fromUtf8("centerXEdit"));
        centerXEdit->setMaximumSize(QSize(32, 16777215));

        horizontalLayout_2->addWidget(centerXEdit);

        yLabel = new QLabel(SpriteWindow);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        sizePolicy2.setHeightForWidth(yLabel->sizePolicy().hasHeightForWidth());
        yLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(yLabel);

        centerYEdit = new QLineEdit(SpriteWindow);
        centerYEdit->setObjectName(QString::fromUtf8("centerYEdit"));
        centerYEdit->setMaximumSize(QSize(32, 16777215));

        horizontalLayout_2->addWidget(centerYEdit);


        gridLayout->addLayout(horizontalLayout_2, 3, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        imageLabel = new QLabel(SpriteWindow);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));

        gridLayout_2->addWidget(imageLabel, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(SpriteWindow);

        textureBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SpriteWindow);
    } // setupUi

    void retranslateUi(QWidget *SpriteWindow)
    {
        SpriteWindow->setWindowTitle(QCoreApplication::translate("SpriteWindow", "SpriteWindow", nullptr));
        textureLabel->setText(QCoreApplication::translate("SpriteWindow", "Texture:", nullptr));
        nameLabel->setText(QCoreApplication::translate("SpriteWindow", "Sprite name:", nullptr));
        okButton->setText(QCoreApplication::translate("SpriteWindow", "Ok", nullptr));
        addButton->setText(QCoreApplication::translate("SpriteWindow", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("SpriteWindow", "Edit", nullptr));
        centerLabel->setText(QCoreApplication::translate("SpriteWindow", "Center:", nullptr));
        xLabel->setText(QCoreApplication::translate("SpriteWindow", "x", nullptr));
        centerXEdit->setText(QCoreApplication::translate("SpriteWindow", "0", nullptr));
        yLabel->setText(QCoreApplication::translate("SpriteWindow", "y", nullptr));
        centerYEdit->setText(QCoreApplication::translate("SpriteWindow", "0", nullptr));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpriteWindow: public Ui_SpriteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRITEWINDOW_H
