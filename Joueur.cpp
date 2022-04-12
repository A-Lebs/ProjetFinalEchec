#include <iostream>
#include <string>
#include "Joueur.h"

Joueur::Joueur(std::string nom) {
	nom_ = nom;
}

std::string Joueur::avoirNom() {
	return nom_;
}

void Joueur::ajouterPiece(Piece piece) {
	pieces.push_back(piece);
}

std::unique_ptr<Piece> Joueur::pieceTrouvee(int positionX, int positionY) {
	for (Piece piece : pieces) {
		if (piece.position->avoirPositionX() == positionX && piece.position->avoirPositionY() == positionY) {
			return std::make_unique<Piece>(piece);
		}
	}
	return nullptr;
}

std::vector<Piece> Joueur::avoirVectorPiece() {
	return pieces;
}

void Joueur::afficherPositionPiece() {
	std::cout << nom_ << std::endl;
	for (Piece p : pieces) {
		p.avoirPosition();
	}
}