#pragma once

#include "Piece.h"
#include <string>

class Roi : public Piece {
public:
	Roi(const Jeux jeux);
	
private:
	std::string characterBlanc;
	std::string characterNoir;
};