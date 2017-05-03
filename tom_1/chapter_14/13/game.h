#ifndef GAME_H
#define GAME_H

#include "gameboard.h"

class Game{
public:
	Game();
	Game( const Game&);
	Game( int);
	Game& operator=( const Game&);

	class Other {};
	operator Other() const;

	~Game();

private:
	Gameboard gameBoard_;
};

void f( Game::Other);

#endif // GAME_H
