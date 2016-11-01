#include <iostream>
#include <ctime>
#include <boost/chrono.hpp>

void f1()
{
	int a = 0;
	for( int i = 0; i < 1000; i++)
	{
		a++;
	}
}

inline void f2()
{
	int a = 0;
	for( int i = 0; i < 1000; i++)
	{
		a++;
	}
}

// g++ main.cpp -lboost_system -lboost_chrono

int main()
{
	const int ITER_COUNT = 100000;

	boost::chrono::high_resolution_clock::time_point start = boost::chrono::high_resolution_clock::now();
	for( int i = 0; i < ITER_COUNT; i++)
	{
		f1();
	}
	boost::chrono::milliseconds ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "simple function worked  " << ms.count() << "ms " << std::endl;

	start = boost::chrono::high_resolution_clock::now();
	for( int i = 0; i < ITER_COUNT; i++)
	{
		f2();
	}
	ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "inline function worked  " << ms.count() << "ms " << std::endl;
}
