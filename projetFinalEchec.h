#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_projetFinalEchec.h"

class projetFinalEchec : public QMainWindow
{
    Q_OBJECT

public:
    projetFinalEchec(QWidget *parent = Q_NULLPTR);

private:
    Ui::projetFinalEchecClass ui;
};
