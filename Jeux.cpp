#include "Jeux.h"
#include "Case.h"
#include "Piece.h"
#include "Joueur.h"

Jeux::Jeux() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			echiquier[i][j] = std::make_shared<Case>(Case(i, j));
		}
	}
}

//void Jeux::initialisation(Joueur& blanc, Joueur& noir) {
//	// Placer piece dans Board.
//	Piece premierPiece(*this);
//	Piece::positionInitialeX = 0;
//	Piece::positionInitialeY = 0;
//
//	Piece deuxiemePiece(*this);
//	Piece::positionInitialeX = 0;
//	Piece::positionInitialeY = 3;
//
//	Piece troisiemePiece(*this);
//	Piece::positionInitialeX = 1;
//	Piece::positionInitialeY = 2;
//
//	Piece quatriemePiece(*this);
//	Piece::positionInitialeX = 3;
//	Piece::positionInitialeY = 5;
//
//	Piece cinquiemePiece(*this);
//	Piece::positionInitialeX = 4;
//	Piece::positionInitialeY = 7;
//
//	Piece sixiemePiece(*this);
//	Piece::positionInitialeX = 5;
//	Piece::positionInitialeY = 5;
//
//	// Associer player à piece
//
//}