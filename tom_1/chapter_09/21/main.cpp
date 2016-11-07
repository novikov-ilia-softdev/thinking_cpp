#include <iostream>
#include <fstream>

#define IFOPEN( filePath) std::ifstream in( filePath);

int main( int argc, char* argv[])
{
	IFOPEN( "./main.cpp");

	std::string s;
	while( getline( in, s))
	{
		std::cout << s << std::endl;
	}
}
