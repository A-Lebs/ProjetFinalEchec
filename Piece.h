#include "Case.h"
#include "Jeux.h"
#include <memory>
#include <string>
#pragma once


class Piece {
public:
	Piece();
	Piece(const Jeux& jeux);
	static int positionInitialeX;
	static int positionInitialeY;
	void avoirPosition();

private:
	std::shared_ptr<Case> position;
};