#pragma once

#include "Piece.h"
#include <string>

class Tour : public Piece {
public:
	Tour(const Jeux jeux);
private:
	std::string characterBlanc = "♖";
	std::string characterNoir = "♜";
};