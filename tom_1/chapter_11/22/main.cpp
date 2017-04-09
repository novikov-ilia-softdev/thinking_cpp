#include <iostream>

class MyClass{
public:
	MyClass( int a = 5) : a_( a) {}
	~MyClass() {}
	MyClass* clone() const
	{
		return new MyClass( a_ + 1);
	}

	int getA() const { return a_; }

private:
	MyClass( const MyClass& obj);
	int a_;
};

void funcPassObj( const MyClass& obj)
{
	MyClass* copy = obj.clone();
	std::cout << "obj.getA(): " << obj.getA() << std::endl;
	std::cout << "copy->getA(): " << copy->getA() << std::endl;
	delete copy;
}

int main()
{
	MyClass obj;
	funcPassObj( obj);
}
