#include <iostream>

char* strCopy( char* src);
int countSize( char* str);

int main()
{
	char* str = "Test string";
	char* copy = strCopy( str);

	std::cout << (long)str << ": " << str << std::endl;
	std::cout << (long)copy << ": " << copy << std::endl;

	delete [] copy;
}

char* strCopy( char* src)
{
	if( !src)
		return 0;

	int size = countSize( src);
	char* dst = new char[ size + 1];
	for( int i = 0; i <= size; i++)
	{
		dst[ i] = src[ i];
	}

	return dst;
}

int countSize( char* str)
{
	int size = 0;
	while( *str)
	{
		size++;
		str++;
	}

	return size;
}
