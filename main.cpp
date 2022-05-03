/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   main.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

// 1. Namespace. L'un regroupe les classes suivantes: Joueur, Piece, Jeux et Case. L'autre est défini dans ProjetFinalEchec.cpp
// 2. Exception lancée dans le constructeur du Roi donc dans Roi.cpp. Exception levée dans main.cpp
// 3. Utilisation d'un vecteur de unique_ptr dans Joueur.h (La mémoire se désalloue automatiquement)

#include <iostream>
#include "Jeux.h"
#include "Cavalier.h"
#include "Roi.h"
#include "Tour.h"
#include "Joueur.h"
#include "Piece.h"
#include "ProjetFinalEchec.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // Création des joueurs    
    classejeux::Joueur blanc("Alexis");
    classejeux::Joueur noir("Zak");
    
    // Création du jeux
    classejeux::Jeux jeux;
    
    // Ajouter pièces
    //Question 2 
    try {
        blanc.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeux)));
        classejeux::Piece::positionInitialeX = 0;
        classejeux::Piece::positionInitialeY = 0;
        blanc.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeux)));
        classejeux::Piece::positionInitialeX = 7;
        classejeux::Piece::positionInitialeY = 0;
        blanc.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeux)));
        classejeux::Piece::positionInitialeX = 2;
        classejeux::Piece::positionInitialeY = 1;
        noir.ajouterPiece(std::make_shared<classejeux::Cavalier>(classejeux::Cavalier(jeux)));
        classejeux::Piece::positionInitialeX = 5;
        classejeux::Piece::positionInitialeY = 5;
        noir.ajouterPiece(std::make_shared<classejeux::Tour>(classejeux::Tour(jeux)));
        classejeux::Piece::positionInitialeX = 3;
        classejeux::Piece::positionInitialeY = 7;
        noir.ajouterPiece(std::make_shared<classejeux::Roi>(classejeux::Roi(jeux)));
    }

    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
 
    ProjetFinalEchec echec(blanc, noir, jeux);
    echec.show();

    return app.exec();
}
