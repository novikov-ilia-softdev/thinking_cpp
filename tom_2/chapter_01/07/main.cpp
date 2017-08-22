#include <iostream>

class MyException{
public:
	MyException()
	{
		std::cout << "MyException::MyException" << std::endl;
	}
	~MyException()
	{
		std::cout << "MyException::~MyException" << std::endl;
	}
};

int main()
{
	try
	{
		throw MyException();
	}
	catch( ...)
	{
		std::cout << "exception!" << std::endl;
	}

	throw MyException();
}
