#include <iostream>

enum Color{
	red,
	green,
	blue
};

int main()
{
	Color color = red;
	for( int i = 0; i < 3; i++)
	{
		std::cout << "color == " << color + i << std::endl;
	}
}
