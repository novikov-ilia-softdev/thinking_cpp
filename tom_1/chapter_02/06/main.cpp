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

	std::string result;

	for( int i = 0; i < v.size() ; i++)
	{
		result += v[ i];
	}

	std::cout << result << std::endl;
}
