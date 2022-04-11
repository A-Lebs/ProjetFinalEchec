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

void Joueur::afficherPositionPiece() {
	std::cout << nom_ << std::endl;
	for (Piece p : pieces) {
		p.avoirPosition();
	}
}