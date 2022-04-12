#include "Piece.h"
#include <vector>
#include <string>
#include <memory>

#pragma once

class Joueur {
public:
	Joueur(std::string nom);
	void ajouterPiece(Piece piece);
	void afficherPositionPiece();
	std::unique_ptr<Piece> pieceTrouvee(int positionX, int positionY);
	std::vector<Piece> avoirVectorPiece();
	std::string avoirNom();
private:
	std::string nom_;
	std::vector<Piece> pieces;
};