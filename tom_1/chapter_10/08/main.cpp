#include <fstream>
#include <iostream>

//std::ofstream out( "statdest.out");

class Obj{
public:
	Obj( char c): c_(c)
	{
		std::cout << "constructor for " << c_ << std::endl;
	}

	~Obj()
	{
		std::cout << "destructor for " << c_ << std::endl;
	}

private:
	char c_;
};

Obj a( 'a');

void f()
{
	static Obj b( 'b');
}

void g()
{
	static Obj c( 'c');
}

int main()
{
	std::cout << "inside main()" << std::endl;
	f();
	g();
	std::cout << "leaving main()" << std::endl;
}
