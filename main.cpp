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
   
 
    ProjetFinalEchec echec(blanc, noir, jeux);
    echec.show();

    return app.exec();
}
