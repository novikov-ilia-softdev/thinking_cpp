#include <iostream>
#include <fstream>

int main()
{
	std::ifstream in( "03.cpp");
	std::string s;
	int count = 0;
	while( in >> s)
	{
		count++;
	}
	std::cout << "count = " << count << std::endl;
}
