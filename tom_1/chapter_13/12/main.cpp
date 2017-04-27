#include <cstddef>
#include <fstream>
#include <iostream>
#include <new>
#include <boost/chrono.hpp>

// g++ main.cpp -lboost_system -lboost_chrono

class Framis{
public:
	enum { psize = 100000 };
	Framis()
	{
		//std::cout << "Framis()" << std::endl;
	}
	~Framis()
	{
		//std::cout << "~Framis()" << std::endl;
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
	for( int i = 0; i < psize; i++)
	{
		if( !alloc_map_[ i])
		{
			//std::cout << "using block " << i << std::endl;
			alloc_map_[ i] = true;
			return pool_ + ( i * sizeof( Framis));
		}
	}

	//std::cout << "out of memory " << std::endl;
	throw std::bad_alloc();
}

void Framis::operator delete( void* m)
{
	if( !m) return;

	unsigned long block = (unsigned long)m - (unsigned long)pool_;
	block /= sizeof( Framis);
	//std::cout << "freeing block " << block << std::endl;
	alloc_map_[ block] = false;
}

int main()
{
	/*
	Framis* f[ Framis::psize];
	try
	{
		for( int i = 0; i < Framis::psize; i++)
		{
			f[ i] = new Framis;
		}
		new Framis;
	}
	catch( std::bad_alloc)
	{
		std::cout << "out of memory!" << std::endl;
	}

	delete f[ 7];
	new Framis;

	for( int i = 0; i < Framis::psize; i++)
	{
		delete f[ i];
	}
	*/


	Framis* f[ Framis::psize];

	boost::chrono::high_resolution_clock::time_point start = boost::chrono::high_resolution_clock::now();
	for( int i = 0; i < Framis::psize; i++)
	{
		f[ i] = new Framis;
	}
	for( int i = 0; i < Framis::psize; i++)
	{
		delete f[ i];
	}

	boost::chrono::milliseconds ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "local allocator worked  " << ms.count() << "ms " << std::endl;


	start = boost::chrono::high_resolution_clock::now();
	for( int i = 0; i < Framis::psize; i++)
	{
		f[ i] = ::new Framis;
	}
	for( int i = 0; i < Framis::psize; i++)
	{
		::delete f[ i];
	}

	ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "global allocator worked  " << ms.count() << "ms " << std::endl;
}
