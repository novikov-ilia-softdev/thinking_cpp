#include <iostream>

class X{
public:
	X( int x): _x( x) {}
	int getXVolatile() volatile { return _x; }
	int getX() { return _x; }


private:
	volatile int _x;
};

int main()
{
	X x1( 1);
	volatile X x2( 2);

	x1.getX();
	x1.getXVolatile();

	//x2.getX();	// error
	x2.getXVolatile();
}
