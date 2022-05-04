/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   ProjetFinalEchec.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#include "ProjetFinalEchec.h"
#include <iostream>
#include <QtWidgets/QMainWindow>
#include <QFontComboBox>
#include <QGridLayout>
#include <QPushButton>
#include <QWidget>
#include <QLabel>
#include <QFont>
#include <QGraphicsScene>

// Question 1
namespace interfacegraphique {
    int policeCaractere = 30;
    int espaceEntreCase = 0;
    int tailleFenetre = 700;
}

namespace ig = interfacegraphique;

ProjetFinalEchec::ProjetFinalEchec(classejeux::Joueur& joueurUn, classejeux::Joueur& joueurDeux, classejeux::Jeux jeuEchec, QWidget* parent)
    : QMainWindow(parent), j1(joueurUn), j2(joueurDeux), tourJoueur(&j1), jeu(jeuEchec)
{
    QWidget* prinFenetre = new QWidget;
    prinFenetre->setFixedSize(ig::tailleFenetre, ig::tailleFenetre);
    QGridLayout* gridLayout = new QGridLayout;
    
    gridLayout->setSpacing(ig::espaceEntreCase);
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            QLabel* caseLabel = new QLabel();
            arrayLabel[i][j] = caseLabel;
            caseLabel->setAlignment(Qt::AlignCenter);
            
            QFont qfont("Times", ig::policeCaractere);
            caseLabel->setFont(qfont);
            
            classejeux::Piece* pieceJ1 = joueurUn.pieceTrouvee(i, j);
            if (pieceJ1) {
                caseLabel->setText(QString::fromStdString(pieceJ1->avoirCharBlanc()));
            }
            
            classejeux::Piece* pieceJ2 = joueurDeux.pieceTrouvee(i, j);
            if (joueurDeux.pieceTrouvee(i, j)) {
                caseLabel->setText(QString::fromStdString(pieceJ2->avoirCharNoir()));
            }

            if ((i + j) % 2 == 0) {
                caseLabel->setStyleSheet("QLabel { background-color : gray }");
            }

            else {
                caseLabel->setStyleSheet("QLabel { background-color : white }");
            }
            gridLayout->addWidget(caseLabel, j, i);
        }
    }   

    prinFenetre->setLayout(gridLayout);
    setCentralWidget(prinFenetre);
}




void ProjetFinalEchec::mousePressEvent(QMouseEvent* event) {
    int tailleCaseX = width();
    int tailleCaseY = height();


    int x = ceil(event->x() / (tailleCaseX / 8)); // numero de la case
    int y = ceil(event->y() / (tailleCaseY / 8));

    if (caseCliquee) {
        if (caseCliquee->first == x && caseCliquee->second == y) {  // Cliquer sur lui meme
            caseCliquee.reset();
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if ((i + j) % 2 == 0) {
                        arrayLabel[i][j]->setStyleSheet("QLabel { background-color : gray }");
                    }
                    else {
                        arrayLabel[i][j]->setStyleSheet("QLabel { background-color : white }");
                    }
                }
            }
        }
        else {
            for (auto&& caseVal : tourJoueur->pieceTrouvee(caseCliquee->first, caseCliquee->second)->mouvementsValide(jeu)) {
                if (caseVal->avoirPositionX() == x && caseVal->avoirPositionY() == y) { // Si position valide == position clic

                    for (int i = 0; i < 8; i++) {
                        for (int j = 0; j < 8; j++) {
                            if ((i + j) % 2 == 0) {
                                arrayLabel[i][j]->setStyleSheet("QLabel { background-color : gray }");
                            }
                            else {
                                arrayLabel[i][j]->setStyleSheet("QLabel { background-color : white }");
                            }
                        }
                    }

                    arrayLabel[caseCliquee->first][caseCliquee->second]->setText(" "); // Met au tireur Texte Vide
                    
                    tourJoueur->modifierPosition(x, y, caseCliquee->first, caseCliquee->second); // Modifie position de la piece vers cible
                    if (tourJoueur == &j1) {
                        classejeux::Piece* pieceJ1 = j1.pieceTrouvee(x, y);
                        arrayLabel[x][y]->setText(QString::fromStdString(pieceJ1->avoirCharBlanc()));
                        tourJoueur = &j2;
                    }
                    else if (tourJoueur == &j2) {
                        classejeux::Piece* pieceJ2 = j2.pieceTrouvee(x, y);
                        arrayLabel[x][y]->setText(QString::fromStdString(pieceJ2->avoirCharNoir()));
                        tourJoueur = &j1;
                    }
                    caseCliquee.reset();
                }
            }
        }

    }
    else {
        if (tourJoueur->pieceTrouvee(x, y)) {
            caseCliquee = { x, y };
            for (auto caseVal : tourJoueur->pieceTrouvee(caseCliquee->first, caseCliquee->second)->mouvementsValide(jeu)) {
                arrayLabel[caseVal->avoirPositionX()][caseVal->avoirPositionY()]->setStyleSheet("QLabel { background-color: yellow}");
            }
        }
    }
                
}
