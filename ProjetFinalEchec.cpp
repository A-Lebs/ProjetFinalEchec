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
#include <QButtonGroup>
#include <QRadioButton>

// Question 1
namespace interfacegraphique {
    int policeCaractere = 30;
    int espaceEntreCase = 0;
    int tailleFenetre = 700;
}

namespace ig = interfacegraphique;

ProjetFinalEchec::ProjetFinalEchec(classejeux::Joueur& joueurUn, classejeux::Joueur& joueurDeux, classejeux::Jeux jeuEchec, QWidget* parent)
    : QMainWindow(parent), j1(joueurUn), j2(joueurDeux), tourJoueur(&j1), autreJoueur(&j2), jeu(jeuEchec)
{
    miseEnMenu();

};

void ProjetFinalEchec::miseEnMenu() {
    QWidget* menu = new QWidget;
    menu->setFixedSize(ig::tailleFenetre, ig::tailleFenetre);
    QPushButton* startButton = new QPushButton(menu);
    startButton->setText(tr("Appuyer pour démarrer la partie"));
    

    QVBoxLayout* buttons = new QVBoxLayout(menu);
    buttons->addWidget(startButton);
    QRadioButton* option1 = new QRadioButton(menu);
    option1->setText(tr("Option 1"));
    buttons->addWidget(option1);
    QRadioButton* option2 = new QRadioButton(menu);
    option2->setText(tr("Option 2"));
    buttons->addWidget(option2);
    QRadioButton* option3 = new QRadioButton(menu);
    option3->setText(tr("Option 3"));
    buttons->addWidget(option3);

    connect(option1, SIGNAL(pressed()), this, SLOT(changeOption1()));
    connect(option2, SIGNAL(pressed()), this, SLOT(changeOption2()));
    connect(option3, SIGNAL(pressed()), this, SLOT(changeOption3()));
    connect(startButton, SIGNAL(pressed()), this, SLOT(miseEnJeu()));

    setCentralWidget(menu);
};

void ProjetFinalEchec::option() {
    if (optionCompteur == 1) {
        option1();
    }
    if (optionCompteur == 2) {
        option2();
    }
    if (optionCompteur == 3) {
        option3();
    }
}

void ProjetFinalEchec::changeOption1() {
    optionCompteur = 1;
}
void ProjetFinalEchec::changeOption2() {
    optionCompteur = 2;
}
void ProjetFinalEchec::changeOption3() {
    optionCompteur = 3;
}

void ProjetFinalEchec::option1() {


    classejeux::Piece::positionInitialeX = 2;
    classejeux::Piece::positionInitialeY = 0;
    j1.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeu)));
    classejeux::Piece::positionInitialeX = 4;
    classejeux::Piece::positionInitialeY = 0;
    j1.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeu)));
    classejeux::Piece::positionInitialeX = 5;
    classejeux::Piece::positionInitialeY = 0;
    j1.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeu)));
    classejeux::Piece::positionInitialeX = 5;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeu)));
    classejeux::Piece::positionInitialeX = 3;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeu)));
    classejeux::Piece::positionInitialeX = 2;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeu)));
}
void ProjetFinalEchec::option2() {
    classejeux::Piece::positionInitialeX = 7;
    classejeux::Piece::positionInitialeY = 7;
    j1.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeu)));
    classejeux::Piece::positionInitialeX = 4;
    classejeux::Piece::positionInitialeY = 2;
    j1.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeu)));
    classejeux::Piece::positionInitialeX = 5;
    classejeux::Piece::positionInitialeY = 1;
    j1.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeu)));
    classejeux::Piece::positionInitialeX = 3;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeu)));
    classejeux::Piece::positionInitialeX = 2;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeu)));
    classejeux::Piece::positionInitialeX = 2;
    classejeux::Piece::positionInitialeY = 6;
    j2.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeu)));
}
void ProjetFinalEchec::option3() {
    classejeux::Piece::positionInitialeX = 5;
    classejeux::Piece::positionInitialeY = 5;
    j1.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeu)));
    classejeux::Piece::positionInitialeX = 4;
    classejeux::Piece::positionInitialeY = 0;
    j1.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeu)));
    classejeux::Piece::positionInitialeX = 5;
    classejeux::Piece::positionInitialeY = 0;
    j1.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeu)));
    classejeux::Piece::positionInitialeX = 5;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeu)));
    classejeux::Piece::positionInitialeX = 3;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeu)));
    classejeux::Piece::positionInitialeX = 2;
    classejeux::Piece::positionInitialeY = 7;
    j2.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeu)));
}

void ProjetFinalEchec::miseEnJeu() {

    option();

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

            std::shared_ptr<classejeux::Piece> pieceJ1 = j1.pieceTrouvee(i, j);
            if (pieceJ1) {
                caseLabel->setText(QString::fromStdString(pieceJ1->avoirCharBlanc()));
            }

            std::shared_ptr<classejeux::Piece> pieceJ2 = j2.pieceTrouvee(i, j);
            if (j2.pieceTrouvee(i, j)) {
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
};

void ProjetFinalEchec::mousePressEvent(QMouseEvent* event) {
    int tailleCaseX = width();
    int tailleCaseY = height();

    int x = ceil(event->x() / (tailleCaseX / 8)); // numero de la case
    int y = ceil(event->y() / (tailleCaseY / 8));

    if (caseCliquee) {
        if (caseCliquee->first == x && caseCliquee->second == y) {  // Cliquer sur lui meme
            caseCliquee.reset();
            couleurBoardNormal();
            
        }
        else {
            for (auto&& caseVal : tourJoueur->pieceTrouvee(caseCliquee->first, caseCliquee->second)->mouvementsValide(jeu, *tourJoueur, *autreJoueur)) {
                if (caseVal->avoirPositionX() == x && caseVal->avoirPositionY() == y) { // Si position valide == position clic
                    tourJoueur->modifierPosition(x, y, caseCliquee->first, caseCliquee->second);
                    if (tourJoueur->roiEnEchec(jeu, *autreJoueur, x, y)) {
                        std::cout << "ECHEC !!!" << std::endl;
                        tourJoueur->modifierPosition(caseCliquee->first, caseCliquee->second, x, y);
                        couleurBoardNormal();
                        couleurBoardEchec();
                        caseCliquee.reset();
                        break;
                    }

                    couleurBoardNormal();

                    arrayLabel[caseCliquee->first][caseCliquee->second]->setText(" "); // Met au tireur Texte Vide
                    
                    tourJoueur->modifierPosition(x, y, caseCliquee->first, caseCliquee->second); // Modifie position de la piece vers cible
                    if (tourJoueur == &j1) {
                        if (j2.pieceTrouvee(x, y)) {
                            j2.retirerPiece(j2.pieceTrouvee(x, y));
                        }
                        std::shared_ptr<classejeux::Piece> pieceJ1 = j1.pieceTrouvee(x, y);
                        arrayLabel[x][y]->setText(QString::fromStdString(pieceJ1->avoirCharBlanc()));
                        tourJoueur = &j2;
                        autreJoueur = &j1;
                    }
                    else if (tourJoueur == &j2) {
                        if (j1.pieceTrouvee(x, y)) {
                            j1.retirerPiece(j1.pieceTrouvee(x, y));
                        }
                        std::shared_ptr<classejeux::Piece> pieceJ2 = j2.pieceTrouvee(x, y);
                        arrayLabel[x][y]->setText(QString::fromStdString(pieceJ2->avoirCharNoir()));
                        tourJoueur = &j1;
                        autreJoueur = &j2;
                    }
                    caseCliquee.reset();
                }
            }
        }

    }
    else {
        if (tourJoueur->pieceTrouvee(x, y)) {
            caseCliquee = { x, y };
            for (auto caseVal : tourJoueur->pieceTrouvee(caseCliquee->first, caseCliquee->second)->mouvementsValide(jeu, *tourJoueur, *autreJoueur)) {
                arrayLabel[caseVal->avoirPositionX()][caseVal->avoirPositionY()]->setStyleSheet("QLabel { background-color: yellow}");
                arrayLabel[caseVal->avoirPositionX()][caseVal->avoirPositionY()]->setStyleSheet("QLabel { border: 3px solid yellow;}");
            }
        }
    }
                
}

void ProjetFinalEchec::couleurBoardNormal() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                arrayLabel[i][j]->setStyleSheet("QLabel { background-color : gray }");
            } else {
                arrayLabel[i][j]->setStyleSheet("QLabel { background-color : white }");
            }
        }
    }
}


void ProjetFinalEchec::couleurBoardEchec() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            auto k = tourJoueur->avoirPosRoi();
            if (jeu.echiquier_[i][j]->avoirPositionX() == k->avoirPositionX() && jeu.echiquier_[i][j]->avoirPositionY() == k->avoirPositionY()) {
                arrayLabel[i][j]->setStyleSheet("QLabel { background-color: red}");
                arrayLabel[i][j]->setStyleSheet("QLabel { border: 7px solid red;}");
                break;
            }
        }
    }
}