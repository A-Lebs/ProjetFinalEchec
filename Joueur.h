#include "Piece.h"
#include <vector>
#include <string>

#pragma once

class Joueur {
public:
	Joueur(std::string nom);
	void ajouterPiece(Piece piece);
	void afficherPositionPiece();
	std::string avoirNom();
private:
	std::string nom_;
	std::vector<Piece> pieces;
};