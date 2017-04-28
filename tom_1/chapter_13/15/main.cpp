#include <iostream>
#include <new>
#include <vector>

class MyClass{
public:
	void* operator new( size_t size);
	void operator delete( void* ptr);

	void* operator new[]( size_t size);
	void operator delete[]( void* ptr);

private:
	friend class MemoryChecker;
	typedef std::vector<MyClass*> ObjVector;
	static ObjVector objVector_;
};

MyClass::ObjVector MyClass::objVector_;

void* MyClass::operator new( size_t size)
{
	std::cout << "MyClass::operator new, size = " << size << std::endl;
	void *ptr = ::new char[ size];
	objVector_.push_back( (MyClass*)ptr);
	return ptr;
}

void MyClass::operator delete( void* ptr)
{
	std::cout << "MyClass::operator delete, ptr = " << ptr << std::endl;
	for( int i = 0; i < objVector_.size(); i++)
	{
		if( objVector_[ i] == ptr)
			objVector_.erase (objVector_.begin() + i);
	}
	delete[] ptr;
}

void* MyClass::operator new[]( size_t size)
{
	std::cout << "MyClass::operator new[], size = " << size << std::endl;
	void *ptr = ::new char[ size];
	objVector_.push_back( (MyClass*)ptr);
	return ptr;
}

void MyClass::operator delete[]( void* ptr)
{
	std::cout << "MyClass::operator delete[], ptr = " << ptr << std::endl;
	for( int i = 0; i < objVector_.size(); i++)
	{
		if( objVector_[ i] == ptr)
			objVector_.erase (objVector_.begin() + i);
	}
	delete[] ptr;
}

class MemoryChecker{
public:
	MemoryChecker(){}
	~MemoryChecker()
	{
		std::cout << std::endl << "~MemoryChecker" << std::endl;
		for( int i = 0; i < MyClass::objVector_.size(); i++)
		{
			std::cout << "memory leak: " << MyClass::objVector_[ i] << std::endl;
		}
	}
};

MemoryChecker memoryChecker;

int main()
{

	MyClass* ptr = new MyClass;
	std::cout << "ptr = " << ptr << std::endl;
	delete ptr;

	MyClass* ptr1 = new MyClass;
	std::cout << "ptr1 = " << ptr1 << std::endl;
	delete ptr1;


	std::cout << std::endl;

	MyClass* arr = new MyClass[ 5];
	std::cout << "arr = " << arr << std::endl;
	delete [] arr;

	MyClass* arr1 = new MyClass[ 5];
	std::cout << "arr1 = " << arr1 << std::endl;
	delete [] arr1;
}
