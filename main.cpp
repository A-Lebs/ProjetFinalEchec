/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   main.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Cr�� le 9 avril 2022
*/

// 1. Namespace. L'un regroupe les classes suivantes: Joueur, Piece, Jeux et Case. L'autre est d�fini dans ProjetFinalEchec.cpp
// 2. Exception lanc�e dans le constructeur du Roi donc dans Roi.cpp. Exception lev�e dans main.cpp
// 3. Utilisation d'un vecteur de unique_ptr dans Joueur.h (La m�moire se d�salloue automatiquement)

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
    // Cr�ation des joueurs    
    classejeux::Joueur blanc("Alexis");
    classejeux::Joueur noir("Zak");
    
    // Cr�ation du jeux
    classejeux::Jeux jeux;
   
 
    ProjetFinalEchec echec(blanc, noir, jeux);
    echec.show();

    return app.exec();
}
