#include <iostream>
#include "Jeux.h"
#include "Cavalier.h"
#include "Roi.h"
#include "Tour.h"
#include "Joueur.h"
#include "Piece.h"
#include "ProjetFinalEchec.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // Création des joueurs
    Joueur blanc("Alexis");
    Joueur noir("Zak");

    // Création du jeux
    Jeux jeux;
    
    // Ajouter pièces
    
    blanc.ajouterPiece(Cavalier(jeux));
    Piece::positionInitialeX = 0;
    Piece::positionInitialeY = 0;
    blanc.ajouterPiece(Tour(jeux));
    Piece::positionInitialeX = 7;
    Piece::positionInitialeY = 0;
    blanc.ajouterPiece(Roi(jeux));
    Piece::positionInitialeX = 2;
    Piece::positionInitialeY = 1;
    noir.ajouterPiece(Piece(jeux));
    Piece::positionInitialeX = 5;
    Piece::positionInitialeY = 5;
    noir.ajouterPiece(Piece(jeux));
    Piece::positionInitialeX = 3;
    Piece::positionInitialeY = 7;
    noir.ajouterPiece(Piece(jeux));

    blanc.afficherPositionPiece();
    noir.afficherPositionPiece();
    
   
    ProjetFinalEchec echec(blanc, noir);
    echec.show();

    return app.exec();
}
