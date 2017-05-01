#include <iostream>

class MyClass{
public:
	MyClass( long l): l_( l) {}

private:
	long l_;
};

int main()
{
	MyClass obj( 5);
}
