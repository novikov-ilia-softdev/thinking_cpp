#include <iostream>

class MyClass{
public:
	MyClass( int i = 0): i_( i) {}
	MyClass& operator=(const MyClass& right, const std::string = "op=call")
	{
		std::cout << "operator=" << std::endl;
		if( this == &right)
			return *this;

		this->i_ = right.i_;
		return *this;
	}
private:
	int i_;
};

int main()
{
	MyClass obj;
	MyClass obj1;
	obj1 = obj;
}
