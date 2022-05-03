/**
* TD6 Exceptions, espace de nom, variables de classe
* \file Cavalier.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#include "Cavalier.h"

classejeux::Cavalier::Cavalier(const classejeux::Jeux& jeux) : Piece(jeux) {
	characterBlanc_ = "♘";
	characterNoir_ = "♞";
}

std::string classejeux::Cavalier::avoirCharNoir() {
	return characterNoir_;
}

std::string classejeux::Cavalier::avoirCharBlanc() {
	return characterBlanc_;
}

std::vector<std::shared_ptr<classejeux::Case>> classejeux::Cavalier::mouvementsValide(Jeux jeu) {
	std::vector<std::shared_ptr<Case>> v;
	return v;
}