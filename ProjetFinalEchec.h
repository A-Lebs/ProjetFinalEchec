#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProjetFinalEchec.h"

class ProjetFinalEchec : public QMainWindow
{
    Q_OBJECT

public:
    ProjetFinalEchec(QWidget *parent = Q_NULLPTR);

private:
    Ui::ProjetFinalEchecClass ui;
};
