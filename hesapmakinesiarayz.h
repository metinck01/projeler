#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hesapmakinesiarayz.h"

class hesapmakinesiarayz : public QMainWindow
{
    Q_OBJECT

public:
    hesapmakinesiarayz(QWidget *parent = nullptr);
    ~hesapmakinesiarayz();

private:
    Ui::hesapmakinesiarayzClass ui;
};

