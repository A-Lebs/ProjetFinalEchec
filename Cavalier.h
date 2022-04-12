#pragma once
#include "Piece.h"
#include "Jeux.h"
#include <string>

class Cavalier : public Piece {
public:
	Cavalier(const Jeux& jeux);
private:
	std::string characterBlanc = "♘";
	std::string characterNoir = "♞";
};