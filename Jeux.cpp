#include "Jeux.h"
#include "Case.h"

Jeux::Jeux() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			echiquier[i][j] = Case(i, j);
		}
	}
}