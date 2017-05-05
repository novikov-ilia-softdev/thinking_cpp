#include <iostream>
#include <vector>

class Rock{
public:
	Rock() { std::cout << "Rock()" << std::endl; }
	Rock( const Rock& right) { std::cout << "Rock( const Rock& right)" << std::endl; }
	Rock& operator=( const Rock& right) { std::cout << "Rock& operator=( const Rock& right)" << std::endl; return *this; }
	~Rock() { std::cout << "~Rock()" << std::endl; }
};

int main()
{
	/*
	std::vector<Rock> rocks;
	Rock rock1;
	Rock rock2;
	Rock rock3;
	rocks.push_back( rock1);
	rocks.push_back( rock2);
	rocks.push_back( rock3);
	*/

	std::vector<Rock*> rocks;
	Rock rock1;
	Rock rock2;
	Rock rock3;
	rocks.push_back( &rock1);
	rocks.push_back( &rock2);
	rocks.push_back( &rock3);

	//std::vector<Rock&> rocks;
}
