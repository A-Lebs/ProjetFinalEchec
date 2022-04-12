#include "Roi.h"

Roi::Roi(const Jeux jeux) : Piece(jeux) {
	characterBlanc = "♖";
	characterNoir = "♜";
}

// implémenter mouvement