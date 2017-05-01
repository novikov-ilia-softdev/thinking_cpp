#include <iostream>
#include <vector>

typedef std::vector<void*> vectorVoid;

class StringVector: public vectorVoid{
public:
	void push_back( std::string* strPtr)
	{
		std::cout << "StringVector::push_back" << std::endl;
		vectorVoid::push_back( strPtr);
	}

	std::string* operator[]( int index)
	{
		std::cout << "StringVector::operator[]" << std::endl;
		return (std::string*)vectorVoid::operator[]( index);
	}
};

int main()
{
	StringVector stringVector;

	stringVector.push_back( new std::string( "hello, "));
	stringVector.push_back( new std::string( "wonderful "));
	stringVector.push_back( new std::string( "world!"));

	for( int i = 0; i < stringVector.size(); i++)
	{
		std::cout << *stringVector[ i];
	}
	std::cout << std::endl;

	for( int i = 0; i < stringVector.size(); i++)
	{
		delete stringVector[ i];
	}
	stringVector.clear();

	//stringVector.push_back( (void*)new int);
}
