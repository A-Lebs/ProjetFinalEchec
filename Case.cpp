#include "Case.h"

Case::Case() {
	positionX = 0;
	positionY = 0;
}

Case::Case(int posX, int posY) {
	positionX = posX;
	positionY = posY;
}

int Case::avoirPositionX() {
	return positionX;
}

int Case::avoirPositionY() {
	return positionY;
}