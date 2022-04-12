#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProjetFinalEchec.h"
#include "Joueur.h"

class ProjetFinalEchec : public QMainWindow
{
    Q_OBJECT

public:
    ProjetFinalEchec(Joueur joueurUn, Joueur joueurDeux, QWidget *parent = Q_NULLPTR);

private:
    Ui::ProjetFinalEchecClass ui;

};
