#include <iostream>
#include <sstream>
#include <fstream>

class Char{
public:
	Char( char c = 'a'): c_( c) {}
	friend std::ostream& operator<<( std::ostream& stream, const Char& c);
	friend std::istream& operator>>( std::istream& stream, Char& c);

private:
	char c_;
};

std::ostream& operator<<( std::ostream& stream, const Char& c)
{
	stream << c.c_;
}

std::istream& operator>>( std::istream& stream, Char& c)
{
	stream >> c.c_;
}

int main()
{
	Char a;
	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Your input: " << a << std::endl;

	std::stringstream stringStream;
	stringStream << a;
	Char b;
	stringStream >> b;
	std::cout << "b (stringstream): " << b << std::endl;

	std::ofstream ofStream( "out.txt");
	ofStream << b;
	Char c;
	std::ifstream ifStream( "out.txt");
	ifStream >> c;
	std::cout << "c (fstream): " << b << std::endl;
}
