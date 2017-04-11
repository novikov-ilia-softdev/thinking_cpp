#include <iostream>
#include <vector>

class MyClass;

typedef void (MyClass::*FuncPtr)();
typedef std::vector<FuncPtr> FuncPtrVector;

class MyClass{
public:
	void add( FuncPtr ptr);
	void remove( FuncPtr ptr);
	void run();

	void a() { std::cout << "function a called" << std::endl; }
	void b() { std::cout << "function b called" << std::endl; }
	void c() { std::cout << "function c called" << std::endl; }

private:
	FuncPtrVector vector_;
};


void MyClass::add( FuncPtr ptr)
{
	vector_.push_back( ptr);
}

void MyClass::remove( FuncPtr ptr)
{
	for( int i = 0; i < vector_.size(); i++)
	{
		if( vector_[ i] == ptr)
		{
			vector_.erase( vector_.begin() + i);
		}
	}
}

void MyClass::run()
{
	std::cout << "run" << std::endl;
	for( int i = 0; i < vector_.size(); i++)
	{
		(this->*(vector_[ i]))();
	}
	std::cout << std::endl;
}

int main()
{
	MyClass obj;
	FuncPtr funcPtr = &MyClass::a;
	obj.add( funcPtr);

	funcPtr = &MyClass::b;
	obj.add( funcPtr);

	funcPtr = &MyClass::c;
	obj.add( funcPtr);

	obj.run();

	funcPtr = &MyClass::b;
	obj.remove( funcPtr);

	obj.run();
}
