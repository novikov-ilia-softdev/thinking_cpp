#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::vector<std::string> v;

	std::ifstream in( "main.cpp");
	std::string s;

	while( getline( in, s))
	{
		v.push_back( s);
	}

	for( int i = v.size(); i >= 0 ; i--)
	{
		std::cout << i << ": " << v[ i] << std::endl;
	}
}
