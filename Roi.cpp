/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   Roi.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#include "Roi.h"
#include <stdexcept>

int classejeux::Roi::compteur_ = 0;

classejeux::Roi::Roi(const classejeux::Jeux jeux) : Piece(jeux) {
	// Question 2
	if (compteur_ >= 2) 
		throw std::logic_error("Plus de deux roi!");

	characterBlanc_ = "♔";
	characterNoir_ = "♚";
	compteur_++;
}

std::string classejeux::Roi::avoirCharNoir() {
	return characterNoir_;
}

std::string classejeux::Roi::avoirCharBlanc() {
	return characterBlanc_;
}

std::vector<std::shared_ptr<classejeux::Case>> classejeux::Roi::mouvementsValide(Jeux jeu) {
	std::vector<std::shared_ptr<Case>> v;
	v.push_back(jeu.avoirCase(1, 0));
	return v;
}
