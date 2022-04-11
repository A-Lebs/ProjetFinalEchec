#include <iostream>
#include "Jeux.h"
#include "Joueur.h"
#include "Piece.h"
using namespace std;

int main(int argc, char *argv[])
{
    // Cr�ation des joueurs
    Joueur blanc("Alexis");
    Joueur noir("Zak");

    // Cr�ation du jeux
    Jeux jeux;
    
    // Ajouter pi�ces
    blanc.ajouterPiece(Piece(jeux));
    Piece::positionInitialeX = 3;
    Piece::positionInitialeY = 2;
    blanc.ajouterPiece(Piece(jeux));
    Piece::positionInitialeX = 7;
    Piece::positionInitialeY = 0;
    blanc.ajouterPiece(Piece(jeux));
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

}
