#include "checkers.h"
#include <iostream>

Checkers::Checkers()
{
	std::cout << "Checkers" << std::endl;
}

Checkers::Checkers( const Checkers& right): Game( right)
{
	std::cout << "Checkers( const Checkers&)" << std::endl;
}

Checkers& Checkers::operator=( const Checkers& right)
{
	std::cout << "Checkers::operator=" << std::endl;
	if( &right != this)
	{
		Game::operator=( right);
	}

	return *this;
}
