#include <iostream>
#include <cstdlib>
#include <new>

class MyClass{
public:
	void* operator new( size_t size);
	void operator delete( void* ptr);

	void* operator new[]( size_t size);
	void operator delete[]( void* ptr);
};

void* MyClass::operator new( size_t size)
{
	std::cout << "MyClass::operator new, size = " << size << std::endl;
	return ::new char[ size];
}

void MyClass::operator delete( void* ptr)
{
	std::cout << "MyClass::operator delete, ptr = " << ptr << std::endl;
	delete[] ptr;
}

void* MyClass::operator new[]( size_t size)
{
	std::cout << "MyClass::operator new[], size = " << size << std::endl;
	return ::new char[ size];
}

void MyClass::operator delete[]( void* ptr)
{
	std::cout << "MyClass::operator delete[], ptr = " << ptr << std::endl;
	delete[] ptr;
}

int main()
{
	MyClass* ptr = new MyClass;
	std::cout << "ptr = " << ptr << std::endl;
	delete ptr;

	std::cout << std::endl;

	MyClass* arr = new MyClass[ 5];
	std::cout << "arr = " << arr << std::endl;
	delete [] arr;
}
