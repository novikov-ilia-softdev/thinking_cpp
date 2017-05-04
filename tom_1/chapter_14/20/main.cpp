#include <iostream>

class SpaceShip{
public:
	void fly() {}
};

class Shuttle: public SpaceShip{
public:
	void land() {}
};

int main()
{
	Shuttle* shuttlePtr = new Shuttle();
	SpaceShip* spaceShipPtr = (SpaceShip*)shuttlePtr;
	spaceShipPtr->land();
}
