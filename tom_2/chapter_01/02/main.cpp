#include <iostream>

class MyClass{
public:
	class MyException{
	public:
		MyException( const char* description): description_( description)
		{

		}
		const char* what() const
		{
			return description_;
		}

	private:
		const char* description_;
	};

	void func() throw( MyException)
	{
		std::cout << "MyClass::func" << std::endl;
		throw MyException( "error!");
	}
};

int main()
{
	MyClass obj;
	try
	{
		obj.func();
	}
	catch( const MyClass::MyException& exc)
	{
		std::cout << "exception: " << exc.what() << std::endl;
	}
}
