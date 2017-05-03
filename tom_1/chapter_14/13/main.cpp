#include <iostream>
#include "chess.h"
#include "checkers.h"

// g++ main.cpp game.cpp gameboard.cpp checkers.cpp
int main()
{
	Chess d1;
	Chess d2(d1);
	//Chess d3( 1);
	d1 = d2;
	f( d1);
	Game::Other go;
	//d1 = go;
	Checkers c1, c2( c1);
	c1 = c2;

	std::cout << std::endl;
}
