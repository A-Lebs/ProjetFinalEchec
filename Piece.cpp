#include <iostream>
#include "Piece.h"
#include "Jeux.h"

// Permet de placer les pièces 
int Piece::positionInitialeX = 0;
int Piece::positionInitialeY = 3;

Piece::Piece() {
	;
}

Piece::Piece(const Jeux& jeux) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			std::shared_ptr<Case> pos = jeux.echiquier[i][j];
			if (pos->avoirPositionX() == positionInitialeX && pos->avoirPositionY() == positionInitialeY) {
				position = std::make_shared<Case>(*pos);
			}
		}
	}
	positionInitialeX += 2;
	positionInitialeY += 1;
}

void Piece::avoirPosition() {
	std::cout << "Position en X: " << position->avoirPositionX() << std::endl;
	std::cout << "Position en Y: " << position->avoirPositionY() << std::endl;
}