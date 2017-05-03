#include "gameboard.h"
#include <iostream>

Gameboard::Gameboard()
{
	std::cout << "Gameboard" << std::endl;
}

Gameboard::Gameboard( const Gameboard&)
{
	std::cout << "Gameboard( const Gameboard&)" << std::endl;
}

Gameboard& Gameboard::operator=( const Gameboard&)
{
	std::cout << "Gameboard::operator=" << std::endl;
}

Gameboard::~Gameboard()
{
	std::cout << "~Gameboard" << std::endl;
}
