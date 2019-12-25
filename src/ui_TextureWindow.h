/********************************************************************************
** Form generated from reading UI file 'TextureWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTUREWINDOW_H
#define UI_TEXTUREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextureWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QPushButton *loadButton;
    QLabel *imagePathLabel;
    QLabel *widthLabel;
    QLabel *widthValueLabel;
    QLabel *heightLabel;
    QLabel *heightValueLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *okButton;
    QGridLayout *gridLayout_2;
    QLabel *imageLabel;

    void setupUi(QWidget *TextureWindow)
    {
        if (TextureWindow->objectName().isEmpty())
            TextureWindow->setObjectName(QString::fromUtf8("TextureWindow"));
        TextureWindow->resize(209, 142);
        horizontalLayout = new QHBoxLayout(TextureWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        nameLabel = new QLabel(TextureWindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(nameLabel, 0, 0, 1, 1);

        nameEdit = new QLineEdit(TextureWindow);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy1);
        nameEdit->setMinimumSize(QSize(100, 0));
        nameEdit->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(nameEdit, 0, 1, 1, 1);

        loadButton = new QPushButton(TextureWindow);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(200);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadButton->sizePolicy().hasHeightForWidth());
        loadButton->setSizePolicy(sizePolicy2);
        loadButton->setMinimumSize(QSize(0, 0));
        loadButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(loadButton, 1, 0, 1, 1);

        imagePathLabel = new QLabel(TextureWindow);
        imagePathLabel->setObjectName(QString::fromUtf8("imagePathLabel"));
        sizePolicy.setHeightForWidth(imagePathLabel->sizePolicy().hasHeightForWidth());
        imagePathLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(imagePathLabel, 1, 1, 1, 1);

        widthLabel = new QLabel(TextureWindow);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(widthLabel, 2, 0, 1, 1);

        widthValueLabel = new QLabel(TextureWindow);
        widthValueLabel->setObjectName(QString::fromUtf8("widthValueLabel"));
        sizePolicy.setHeightForWidth(widthValueLabel->sizePolicy().hasHeightForWidth());
        widthValueLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(widthValueLabel, 2, 1, 1, 1);

        heightLabel = new QLabel(TextureWindow);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(heightLabel->sizePolicy().hasHeightForWidth());
        heightLabel->setSizePolicy(sizePolicy3);
        heightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(heightLabel, 3, 0, 1, 1);

        heightValueLabel = new QLabel(TextureWindow);
        heightValueLabel->setObjectName(QString::fromUtf8("heightValueLabel"));
        sizePolicy.setHeightForWidth(heightValueLabel->sizePolicy().hasHeightForWidth());
        heightValueLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(heightValueLabel, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        okButton = new QPushButton(TextureWindow);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setMinimumSize(QSize(0, 0));
        okButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(okButton, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        imageLabel = new QLabel(TextureWindow);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(imageLabel, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(TextureWindow);

        QMetaObject::connectSlotsByName(TextureWindow);
    } // setupUi

    void retranslateUi(QWidget *TextureWindow)
    {
        TextureWindow->setWindowTitle(QCoreApplication::translate("TextureWindow", "TextureWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("TextureWindow", "Texture name:", nullptr));
        loadButton->setText(QCoreApplication::translate("TextureWindow", "Load Texture", nullptr));
        imagePathLabel->setText(QCoreApplication::translate("TextureWindow", "No file", nullptr));
        widthLabel->setText(QCoreApplication::translate("TextureWindow", "Width:", nullptr));
        widthValueLabel->setText(QCoreApplication::translate("TextureWindow", "0px", nullptr));
        heightLabel->setText(QCoreApplication::translate("TextureWindow", "Height:", nullptr));
        heightValueLabel->setText(QCoreApplication::translate("TextureWindow", "0px", nullptr));
        okButton->setText(QCoreApplication::translate("TextureWindow", "Ok", nullptr));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TextureWindow: public Ui_TextureWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTUREWINDOW_H
