#include <iostream>
#include <new>

class NoMemory{
public:
	NoMemory()
	{
		std::cout << "NoMemory::NoMemory()" << std::endl;
	}
	void* operator new( size_t) throw( std::bad_alloc)
	{
		std::cout << "NoMemory::operator new" << std::endl;
		try
		{
			int* ptr = ::new int[ size_];
		}
		catch( std::bad_alloc)
		{
			std::cout << "1) Out of memory exception" << std::endl;
			throw std::bad_alloc();
		}
	}

private:
	enum { size_ = 1000000000};
	int* ptr_;
};

int main()
{
	NoMemory* nm = 0;
	try
	{
		while( 1)
		{
			nm = new NoMemory;
		}
	}
	catch( std::bad_alloc)
	{
		std::cout << "2) Out of memory exception" << std::endl;
	}

	std::cout << "nm = " << nm << std::endl;
}
