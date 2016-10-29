#include <iostream>

class X{
private:
	int _i;

public:
	X( int i = 0): _i( i) {}
	void modify();
};

void X::modify() { _i++; }

X f5() { return X(); }

const X f6() { return X(); }

void f7( X& x) { x.modify(); }

int main()
{
	f5() = X( 1);
	f5().modify();
	//f7( f5);
	//f6() = X( 1);
	//f6().modify();
	//f7( f6());
}
