#ifndef CHESS_H
#define CHESS_H

#include "game.h"

class Chess: public Game{
public:
	Chess();
	Chess( const Chess&);
	Chess& operator=( const Chess&);
};

#endif // CHESS_H
