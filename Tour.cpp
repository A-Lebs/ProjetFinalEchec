/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   Tour.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#include "Tour.h"

classejeux::Tour::Tour(const classejeux::Jeux jeux) : Piece(jeux) {
	characterBlanc_ = "♖";
	characterNoir_ = "♜";
}

std::string classejeux::Tour::avoirCharNoir() {
	return characterNoir_;
}

std::string classejeux::Tour::avoirCharBlanc() {
	return characterBlanc_;
}

//implémenter mouvement
std::vector<std::shared_ptr<classejeux::Case>> classejeux::Tour::mouvementsValide(Jeux jeu) {
	std::vector<std::shared_ptr<Case>> v;
	return v;
}