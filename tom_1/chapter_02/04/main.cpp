#include <iostream>
#include <fstream>

int main()
{
	std::string searchString;
	std::cout << "Input string for search: ";
	std::cin >> searchString;
	std::ifstream in( "main.cpp");
	std::string s;
	int count = 0;
	while( in >> s)
	{
		if( s == searchString)
			count++;
	}
	std::cout << "count = " << count << std::endl;
}
