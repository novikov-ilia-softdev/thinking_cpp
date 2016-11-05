#include <iostream>
#include <boost/chrono.hpp>

class A{
public:
	inline A();
};

class B{
public:
	inline B();

private:
	A _a;
};

A::A()
{
	//std::cout << "A::A" << std::endl;
}

B::B()
{
	//std::cout << "B::B" << std::endl;
}

// g++ main.cpp -lboost_system -lboost_chrono

int main()
{
	boost::chrono::high_resolution_clock::time_point start = boost::chrono::high_resolution_clock::now();
	B b[ 1000000];
	boost::chrono::milliseconds ms = boost::chrono::duration_cast<boost::chrono::milliseconds> (boost::chrono::high_resolution_clock::now() - start);
	std::cout << "taked  " << ms.count() << "ms " << std::endl;
}
