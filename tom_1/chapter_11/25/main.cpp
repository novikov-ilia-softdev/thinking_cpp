#include <iostream>

class MyClass{
public:
	int arr[ 5];
	void print() const
	{
		for( int i = 0; i < 5; i++)
		{
			std::cout << arr[ i] << " ";
		}
		std::cout << std::endl;
	}
};

typedef int int5[5];

int main()
{
	MyClass obj;
	MyClass* objPtr = &obj;

	int5 MyClass::*ptrToArr = &MyClass::arr;
	obj.print();

	for( int i = 0; i < 5; i++)
	{
		(obj.*ptrToArr)[ i] = i + 10;
	}

	obj.print();
}
