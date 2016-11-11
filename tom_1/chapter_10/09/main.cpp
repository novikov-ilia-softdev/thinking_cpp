#include <fstream>
#include <iostream>

extern std::ofstream out;

class Obj{
public:
	Obj( char c): c_(c)
	{
		out << "constructor for " << c_ << std::endl;
	}

	~Obj()
	{
		out << "destructor for " << c_ << std::endl;
	}

private:
	char c_;
};

Obj a( 'a');

std::ofstream out( "statdest.out");

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
	out << "inside main()" << std::endl;
	f();
	g();
	out << "leaving main()" << std::endl;
}
