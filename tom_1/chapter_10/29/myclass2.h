#ifndef MYCLASS2_H
#define MYCLASS2_H

#include "myclass.h"

namespace MyNamespace2{

class MyClass2{
private:
	static const MyNamespace::MyClass constArr_[ 2];
	static MyNamespace::MyClass arr_[ 3];

public:
	static void printConstArr()
	{
		std::cout << "printConstArr:" << std::endl;
		for( int i = 0; i < sizeof( constArr_) / sizeof( *constArr_); i++)
		{
			constArr_[ i].print();
			std::cout << " ";
		}
		std::cout << std::endl;
	}

	static void printArr()
	{
		std::cout << "printArr:" << std::endl;
		for( int i = 0; i < sizeof( arr_) / sizeof( *arr_); i++)
		{
			arr_[ i].print();
			std::cout << " ";
		}
		std::cout << std::endl;
	}
};

const MyNamespace::MyClass MyClass2::constArr_[] = { MyNamespace::MyClass( "1!"), MyNamespace::MyClass( "2!")};
MyNamespace::MyClass MyClass2::arr_[] = { MyNamespace::MyClass( "3!"), MyNamespace::MyClass( "4!"), MyNamespace::MyClass( "5!")};

};

#endif // MYCLASS2_H
