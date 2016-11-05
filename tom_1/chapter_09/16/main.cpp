#include <iostream>
#include <string>

#define DEBUG(x) std::cout << #x << " = " << x << std::endl;

int main(int argc, char*argv[])
{
	if( argc == 2)
	{
		std::string str = argv[ 1];
		DEBUG( str);
		int length = str.length();
		for( int i = 0; i < length - 1; i++)
		{
			str = str.substr( 0, str.length() - 1);	// back
			//str = str.substr( 1, str.length() - 1);	// forward
			DEBUG( str);
		}
	}
}
