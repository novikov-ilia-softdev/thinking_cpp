#include <iostream>

class MyClass{
public:
	//friend const MyClass& operator++( MyClass& a);
	//friend const MyClass& operator++( MyClass& a, int);

	const MyClass& operator++();
	const MyClass operator++( int);
};

/*
const MyClass& operator++( MyClass& a)
{
	std::cout << "prefix" << std::endl;
	return a;
}

const MyClass operator++( MyClass& a, int)
{
	std::cout << "postfix" << std::endl;
	return a;
}
*/

const MyClass& MyClass::operator++()
{
	std::cout << "prefix" << std::endl;
	return *this;
}

const MyClass MyClass::operator++( int)
{
	std::cout << "postfix" << std::endl;
	MyClass obj;
	return obj;
}

int main()
{
	MyClass obj;
	++obj;
	obj++;

	int b = 5;
	std::cout << "b: " << b << std::endl;
	std::cout << "++b: " << ++b << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "b++: " << b++ << std::endl;
	std::cout << "b: " << b << std::endl;
}
