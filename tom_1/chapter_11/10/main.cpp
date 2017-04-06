#include <iostream>

int incrementFunction( int intArgument)
{
	int localVariable = intArgument;
	localVariable++;
	return localVariable;
}

int main()
{
	incrementFunction( 5);
}
