#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

namespace MyNamespace{

class MyClass{
private:
	static const int constArr_[ 5];
	static int arr_[ 7];

public:
	static void printConstArr()
	{
		std::cout << "printConstArr:" << std::endl;
		for( int i = 0; i < sizeof( constArr_) / sizeof( *constArr_); i++)
		{
			std::cout << constArr_[ i] << " ";
		}
		std::cout << std::endl;
	}

	static void printArr()
	{
		std::cout << "printArr:" << std::endl;
		for( int i = 0; i < sizeof( arr_) / sizeof( *arr_); i++)
		{
			std::cout << arr_[ i] << " ";
		}
		std::cout << std::endl;
	}
};

const int MyClass::constArr_[] = { 1, 2, 3, 4, 5};
int MyClass::arr_[] = { 5, 6, 7, 8, 9, 10, 11};

};

#endif // MYCLASS_H
