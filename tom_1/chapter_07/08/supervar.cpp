#include "supervar.h"
#include <iostream>

SuperVar::SuperVar( char ch)
{
	//vartype = character;
	c = ch;
}

SuperVar::SuperVar( int ii)
{
	//vartype = integer;
	i = ii;
}

SuperVar::SuperVar( float ff)
{
	//vartype = floating_point;
	f = ff;
}

void SuperVar::print( VarType vartype)
{
	switch( vartype)
	{
		case character: std::cout << "character: " << c << std::endl; break;
		case integer: std::cout << "integer: " << i << std::endl; break;
		case floating_point: std::cout << "float: "<< f << std::endl; break;
	}
}
