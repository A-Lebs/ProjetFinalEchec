#pragma once
#include "Case.h"
#include <memory>


class Jeux {
public:
	Jeux();
	std::shared_ptr<Case> echiquier[8][8];
	void initialisation();
	// test
	
};