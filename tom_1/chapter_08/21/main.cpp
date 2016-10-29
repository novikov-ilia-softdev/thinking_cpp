#include <iostream>

class X{
private:
	const int _x;
	enum { size = 1000 };
	int _arr[ size];

public:
	X( int x): _x( x) {}
};

int main()
{
	X x( 5);
}
