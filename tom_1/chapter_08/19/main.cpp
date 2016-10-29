#include <iostream>

class X{
private:
	float _f1;
	const float _f2;

public:
	X( float f1, float f2): _f1( f1), _f2( f2) {}
	void inc() { _f1++; /* _f2++;*/ }
};

int main()
{
	X x( 3.14, 2.71);
}
