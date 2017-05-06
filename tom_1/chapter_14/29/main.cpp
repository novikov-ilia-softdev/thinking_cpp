#include <cstddef>
#include <fstream>
#include <iostream>
#include <new>

// g++ main.cpp

class Framis{
public:
	enum { psize = 10 };
	Framis()
	{
		std::cout << "Framis()" << std::endl;
	}
	virtual ~Framis()
	{
		std::cout << "~Framis()" << std::endl;
	}
	void* operator new( size_t) throw( std::bad_alloc);
	void operator delete( void*);

private:
	static unsigned char pool_[];
	static bool alloc_map_[];
};

unsigned char Framis::pool_[ psize * sizeof( Framis)];
bool Framis::alloc_map_[ psize] = { false };

void* Framis::operator new( size_t) throw( std::bad_alloc)
{
	std::cout << "Framis::operator new" << std::endl;
	for( int i = 0; i < psize; i++)
	{
		if( !alloc_map_[ i])
		{
			//std::cout << "using block " << i << std::endl;
			alloc_map_[ i] = true;
			return pool_ + ( i * sizeof( Framis));
		}
	}

	std::cout << "out of memory " << std::endl;
	throw std::bad_alloc();
}

void Framis::operator delete( void* m)
{
	std::cout << "Framis::operator delete" << std::endl;
	if( !m) return;

	unsigned long block = (unsigned long)m - (unsigned long)pool_;
	block /= sizeof( Framis);
	//std::cout << "freeing block " << block << std::endl;
	alloc_map_[ block] = false;
}

class DerivedFramis: public Framis{
public:
	DerivedFramis()
	{
		std::cout << "DerivedFramis()" << std::endl;
	}
	~DerivedFramis()
	{
		std::cout << "~DerivedFramis()" << std::endl;
	}

	void* operator new( size_t) throw( std::bad_alloc);
	void operator delete( void*);
};

void* DerivedFramis::operator new( size_t size) throw( std::bad_alloc)
{
	std::cout << "DerivedFramis::operator new" << std::endl;
	return ::new char[ size];
}
void DerivedFramis::operator delete( void* ptr)
{
	std::cout << "DerivedFramis::operator delete" << std::endl;
	delete[] ptr;
}

int main()
{
	Framis* f1 = new Framis;
	delete f1;
	std::cout << std::endl;
	Framis* f2 = new DerivedFramis;
	delete f2;
	std::cout << std::endl;
	DerivedFramis* f3 = new DerivedFramis;
	delete f3;

	/*
	DerivedFramis* f[ Framis::psize];
	try
	{
		for( int i = 0; i < Framis::psize; i++)
		{
			f[ i] = new DerivedFramis;
		}
		new DerivedFramis;
	}
	catch( std::bad_alloc)
	{
		std::cout << "out of memory!" << std::endl;
	}

	delete f[ 7];
	new DerivedFramis;

	for( int i = 0; i < Framis::psize; i++)
	{
		delete f[ i];
	}
	*/
}
