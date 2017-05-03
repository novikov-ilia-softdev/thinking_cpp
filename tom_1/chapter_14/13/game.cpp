#include "game.h"
#include <iostream>

Game::Game()
{
	std::cout << "Game" << std::endl;
}

Game::Game( const Game& game): gameBoard_( game.gameBoard_)
{
	std::cout << "Game( const Game&)" << std::endl;
}

Game::Game( int)
{
	std::cout << "Game( int)" << std::endl;
}

Game& Game::operator=( const Game& right)
{
	std::cout << "Game::operator=" << std::endl;
	if( &right != this)
	{
		gameBoard_ = right.gameBoard_;
	}

	return *this;
}

Game::operator Other() const
{
	std::cout << "Game::operator Other" << std::endl;
	return Other();
}

Game::~Game()
{
	std::cout << "Game::~Game" << std::endl;
}

void f( Game::Other)
{

}
