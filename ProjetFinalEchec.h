/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   ProjetFinalEchec.h
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#pragma once

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include <QLabel>
#include <vector>
#include "ui_ProjetFinalEchec.h"
#include "Joueur.h"

class ProjetFinalEchec : public QMainWindow
{
    Q_OBJECT

public:

    ProjetFinalEchec(classejeux::Joueur& joueurUn, classejeux::Joueur& joueurDeux, classejeux::Jeux jeuEchec, QWidget *parent = Q_NULLPTR);
    virtual void mousePressEvent(QMouseEvent* event) override;
    void couleurBoardNormal();
   /* void couleurBoardEchec();*/

private:
    classejeux::Joueur& j1;
    classejeux::Joueur& j2;
    classejeux::Jeux jeu;

    classejeux::Joueur* tourJoueur;
    classejeux::Joueur* autreJoueur;
    std::optional<std::pair<int, int>> caseCliquee;
    QLabel* arrayLabel[8][8];
    Ui::ProjetFinalEchecClass ui;
};
