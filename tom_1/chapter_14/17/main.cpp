#include <iostream>

class X{

};

class Y: protected X{

};

class Z : private X{

};

class W : public X{

};

int main()
{
	X x;
	Y y;
	Z z;
	W w;
	//(X)y;
	//(X)z;
	(X)w;
}
