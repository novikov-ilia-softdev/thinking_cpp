#include <iostream>

class MyClass{
public:
	MyClass( const std::string& str): str_( str)
	{
	}

	const std::string& getStr() const
	{
		return str_;
	}

private:
	std::string str_;
};

class MyClass1{
public:
	MyClass1( const std::string& str): obj_( str)
	{
	}

	const std::string& getStr() const
	{
		return obj_.getStr();
	}

private:
	MyClass obj_;
};

int main()
{
	MyClass1 obj1( "test1");
	MyClass1 obj2 = obj1;
	MyClass1 obj3( "test3");
	obj3 = obj1;
	std::cout << "obj1.getStr(): " << obj1.getStr() << std::endl;
	std::cout << "obj2.getStr(): " << obj2.getStr() << std::endl;
	std::cout << "obj3.getStr(): " << obj3.getStr() << std::endl;
}
