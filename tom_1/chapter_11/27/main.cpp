#include <iostream>
#include <vector>

#define DF(N) std::string N() { std::string str = "function " + std::string(#N) + " called\n"; return str; }

DF( a);	DF( b); DF( c); DF( d); DF( e); DF( f); DF( g);

typedef std::string (*FuncPtr)();
typedef std::vector<FuncPtr> FuncPtrVector;

class MyClass{
public:
	void add( FuncPtr ptr);
	void remove( FuncPtr ptr);
	void run();

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
		std::cout << vector_[ i]();
	}
	std::cout << std::endl;
}

int main()
{
	MyClass obj;
	obj.add( a);
	obj.add( b);
	obj.add( c);
	obj.add( d);
	obj.add( e);
	obj.add( f);
	obj.add( g);

	obj.run();

	obj.remove( b);
	obj.remove( d);
	obj.remove( e);

	obj.run();
}
