#include "Piece.h"
#include <vector>

#pragma once

class Joueur {
public:
	Joueur();
	void ajouterPiece(Piece piece);
private:
	std::vector<Piece> pieces;
};