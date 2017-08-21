#include <iostream>
#include <stdexcept>

class MyClass{
private:
	static void* lastPtr_;

public:
	void* operator new( size_t)
	{
		std::cout << "MyClass::operator new" << std::endl;
		for( int i = 0; i < 11; i++)
		{
			std::cout << i << std::endl;
			lastPtr_ = ::new MyClass;
			if( i == 10)
				throw std::bad_alloc();
		}
	}

	static void cleanup()
	{
		std::cout << "cleanup" << std::endl;
		delete lastPtr_;
	}
};

void* MyClass::lastPtr_ = 0;

int main()
{
	for( int i = 0; i < 5; i++)
	{
		try
		{
			MyClass* myClassPtr = new MyClass;
		}
		catch( const std::bad_alloc& ba)
		{
			std::cout << "bad_alloc exception!" << std::endl;
			MyClass::cleanup();
		}
	}
}
