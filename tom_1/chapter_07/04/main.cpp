#include <iostream>

class MyClass{
public:
	//void print() const;
	//void print( int) const;
	//void print( int, int) const;
	//void print( int, int, int) const;
	void print( int a = 6, int b = 7, int c = 8) const;
};

/*
void MyClass::print() const
{
	std::cout << "void print() const" << std::endl;
}

void MyClass::print( int a) const
{
	std::cout << "void print( int a) const" << std::endl;
}

void MyClass::print( int a, int b) const
{
	std::cout << "void print( int a, int b) const" << std::endl;
}
*/
void MyClass::print( int a, int b, int c) const
{
	std::cout << "void print( int a, int b, int c) const" << std::endl;
}


int main()
{
	MyClass obj;
	obj.print();
	obj.print( 1);
	obj.print( 1, 2);
	obj.print( 1, 2, 3);
}
