#ifndef CONFIG_H
#define CONFIG_H

#pragma once

#include <QDialog>
#include "ui_ConfigWindow.h"

class Config : public QDialog
{
    Q_OBJECT

public:
    Config(QWidget *parent = Q_NULLPTR);
    ~Config();

private:
    Ui::Config ui;
};

#endif // CONFIG_H
