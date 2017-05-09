#include <iostream>
#include <boost/chrono.hpp>

// g++ main.cpp -lboost_system -lboost_chrono

class Base{
public:
	void nonVirtualFunction()
	{
		//std::cout << "Base::nonVirtualFunction" << std::endl;
	}

	virtual void virtualFunction()
	{
		//std::cout << "Base::virtualFunction" << std::endl;
	}
};

class Derived: public Base{
public:
	virtual void virtualFunction()
	{
		//std::cout << "Derived::virtualFunction" << std::endl;
	}
};

int main()
{
	Base* bp = new Derived;

	const int iterCount = 100000000;

	boost::chrono::high_resolution_clock::time_point start = boost::chrono::high_resolution_clock::now();
	for( int i = 0; i < iterCount; i++)
	{
		bp->virtualFunction();
	}

	boost::chrono::milliseconds ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "virtual function worked  " << ms.count() << "ms " << std::endl;


	start = boost::chrono::high_resolution_clock::now();
	for( int i = 0; i < iterCount; i++)
	{
		bp->nonVirtualFunction();
	}

	ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "non virtual function worked  " << ms.count() << "ms " << std::endl;
}
