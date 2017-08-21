#include <iostream>

int main()
{
	try
	{
		throw 5;
	}
	catch( ...)
	{
		std::cout << "Exception!" << std::endl;
	}
}
