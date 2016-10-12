#include <iostream>
#include <boost/lexical_cast.hpp>

int main()
{
	std::string strArr[10];
	for( int i = 0; i < 10; i++)
	{
		strArr[ i] = "string_" + boost::lexical_cast<std::string>( i);
		std::cout << strArr[ i] << std::endl;
	}
}
