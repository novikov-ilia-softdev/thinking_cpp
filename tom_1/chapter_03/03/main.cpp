#include <iostream>
#include <fstream>

int main()
{
	std::ifstream in( "main.cpp");
	std::string str;
	while( in >> str)
	{
		//std::cout << "Input command: ";
		//std::cin >> str;

		std::cout << str;

		int opt;
		if( str == std::string( "marco"))
			opt = 1;

		if( str == std::string( "break;"))
			opt = 2;

		switch( opt)
		{
			case 1: std::cout << "polo!" << std::endl; break;
			case 2: opt = -1; std::cout << "good bye!" << std:: endl; break;
			default: std::cout << "unknown" << std::endl; break;
		}

		if( opt == -1)
			break;
	}
}
