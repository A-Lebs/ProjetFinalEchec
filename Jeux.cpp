#include "Jeux.h"
#include "Case.h"

Jeux::Jeux() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			echiquier[i][j] = std::make_shared<Case> (Case(i, j));
		}
	}
}

void Jeux::initialisation() {
	// Associer player à piece
	// Placer piece dans Board
}