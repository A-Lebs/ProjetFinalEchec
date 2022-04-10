#pragma once
class Case
{
public:
	Case();
	Case(int posX, int posY);
	int avoirPositionX();
	int avoirPositionY();

private:
	int positionX;
	int positionY;
};

