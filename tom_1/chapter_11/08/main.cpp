#include <iostream>

void increment( char& ch)
{
	ch++;
}

int main()
{
	char ch = 'a';
	std::cout << "ch: " << ch << std::endl;
	increment( ch);
	std::cout << "ch: " << ch << std::endl;
}
