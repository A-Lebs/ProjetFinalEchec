/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   Joueur.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#include <iostream>
#include <string>
#include "Joueur.h"

classejeux::Joueur::Joueur(std::string nom) {
	nom_ = nom;
}

std::string classejeux::Joueur::avoirNom() {
	return nom_;
}

void classejeux::Joueur::ajouterPiece(std::shared_ptr<Piece> piece) {
 	pieces_.push_back(move(piece));
}

classejeux::Piece* classejeux::Joueur::pieceTrouvee(int positionX, int positionY) {
	for (auto& piece : pieces_) {
		if (piece->position_->avoirPositionX() == positionX && piece->position_->avoirPositionY() == positionY) {
			return piece.get();
		}
	}
	return nullptr;
}

void classejeux::Joueur::modifierPosition(int nouveauX, int nouveauY, int ancienX, int ancienY) {
	for (auto& piece : pieces_) {
		if (ancienX == piece->avoirPosition()->avoirPositionX() && ancienY == piece->avoirPosition()->avoirPositionY()) {
			piece->avoirPosition()->changerX(nouveauX);
			piece->avoirPosition()->changerY(nouveauY);
		}
	}
}

void classejeux::Joueur::retirerPiece(Piece* pieceRetire) {
	for (auto&& p : pieces_) {
		if (p.get()->avoirPosition()->avoirPositionX() == pieceRetire->avoirPosition()->avoirPositionX()
			&& p.get()->avoirPosition()->avoirPositionY() == pieceRetire->avoirPosition()->avoirPositionY()) {
			pieces_.erase(find(pieces_.begin(), pieces_.end(), p));
		}
	}
}

