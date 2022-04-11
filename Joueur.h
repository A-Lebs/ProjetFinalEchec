#include "Piece.h"

#pragma once

class Joueur {
public:
	Joueur();
	Joueur(const Piece& premiere, const Piece& deuxieme, const Piece& troisieme);
private:
	Piece pieces[3];
};