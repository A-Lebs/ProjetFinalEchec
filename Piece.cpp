﻿/**
* TD6 Exceptions, espace de nom, variables de classe
* \file   Piece.cpp
* \author Alexis LeBlanc et Zakaria Zair
* \date	21 avril 2022
* Créé le 9 avril 2022
*/

#include <iostream>
#include "Piece.h"
#include "Jeux.h"
#include "Cavalier.h"

// Permet de placer les pièces 
int classejeux::Piece::positionInitialeX = 0;
int classejeux::Piece::positionInitialeY = 3;

classejeux::Piece::Piece() {;}

classejeux::Piece::Piece(const Jeux& jeux) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::shared_ptr<Case> pos = jeux.echiquier_[i][j];
			if (pos->avoirPositionX() == positionInitialeX && pos->avoirPositionY() == positionInitialeY) {
				position_ = std::make_shared<Case>(*pos);
			}
		}
	}
}

std::shared_ptr<classejeux::Case> classejeux::Piece::avoirPosition() {
	return position_;
}

void classejeux::Piece::afficherPos() {
	std::cout << "X: " << position_->avoirPositionX() << std::endl;
	std::cout << "Y: " << position_->avoirPositionY() << std::endl;
}


