#include <iostream>

class Orange{};

class Pear{};

class Apple{
public:
	operator Orange() const
	{

	}

	Pear makePear() const
	{
		return Pear();
	}
};

void eat( Orange)
{

}

void eat( Pear)
{

}

int main()
{
	Apple apl;
	eat( apl);
	eat( apl.makePear());
}
