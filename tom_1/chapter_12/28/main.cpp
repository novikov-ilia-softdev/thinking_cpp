#include <iostream>

class Orange{
public:
};

class Apple{
public:
	explicit Apple( const Orange& org) {}
};


void func( const Apple& apl)
{

}

int main()
{
	func( Apple( Orange()));
}
