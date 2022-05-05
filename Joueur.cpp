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

std::shared_ptr<classejeux::Piece> classejeux::Joueur::pieceTrouvee(int positionX, int positionY) {
	for (auto& piece : pieces_) {
		if (piece->position_->avoirPositionX() == positionX && piece->position_->avoirPositionY() == positionY) {
			return piece;
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

void classejeux::Joueur::retirerPiece(std::shared_ptr<Piece> pieceRetire) {
	auto it = std::find(pieces_.begin(), pieces_.end(), pieceRetire);
	pieces_.erase(it);
}

std::shared_ptr<classejeux::Case> classejeux::Joueur::avoirPosRoi() {
	for (auto&& p : pieces_) {
		if (!p->estMangeable()) {
			return p->position_;
		}
	}
	return nullptr;
}

bool classejeux::Joueur::roiEnEchec(Jeux jeu, Joueur adversaire, int x, int y) {
	if (adversaire.pieceTrouvee(x, y)) {
		adversaire.retirerPiece(adversaire.pieceTrouvee(x, y));
	}
	for (auto&& piece : adversaire.avoirPieces()) {	// Chaque piece de l'adversaire
		// std::cout << "RoiX: " << avoirPosRoi()->avoirPositionX() << "RoiY: " << avoirPosRoi()->avoirPositionY() << std::endl;
		for (std::shared_ptr<Case> cas : piece->mouvementsValide(jeu, adversaire, *this)) {
			// std::cout << "X: " << cas->avoirPositionX() << "    Y: " << cas->avoirPositionY() << std::endl;
			if (cas->avoirPositionX() == avoirPosRoi()->avoirPositionX() && cas->avoirPositionY() == avoirPosRoi()->avoirPositionY()) {
				return true;
			}
		}
	}
	if (!adversaire.pieceTrouvee(x, y)) {
		adversaire.ajouterPiece(adversaire.pieceTrouvee(x, y));
	}
	return false;
}


