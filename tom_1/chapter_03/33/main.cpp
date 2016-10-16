#include <iostream>

typedef float			(*simpeFuncPtr)		(char);
typedef simpeFuncPtr	(*complexFuncPtr)	(int);

float simpleFunc( char c)
{
	std::cout << "simpleFunc" << std::endl;
	return 3.14;
}

simpeFuncPtr complexFunc( int i)
{
	std::cout << "complexFunc" << std::endl;
	return simpleFunc;
}

int main()
{
	complexFuncPtr ptr = complexFunc;
	//simpeFuncPtr ptr1 = (*ptr)(5);
	//(*ptr1)( 32);
	(*(*ptr)(5))(32);
}
