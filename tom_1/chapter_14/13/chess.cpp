#include "chess.h"
#include <iostream>

Chess::Chess(): Game()
{
	std::cout << "Chess" << std::endl;
}

Chess::Chess( const Chess& right): Game( right)
{
	std::cout << "Chess( const Chess&)" << std::endl;
}

Chess& Chess::operator=( const Chess& right)
{
	std::cout << "Chess::operator=" << std::endl;
	if( &right != this)
	{
		Game::operator=( right);
	}

	return *this;
}
