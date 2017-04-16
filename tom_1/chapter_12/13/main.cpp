#include <iostream>

class MyClass{
public:
	MyClass( int i = 0);
	~MyClass();
	MyClass& operator=(const MyClass& right);

private:
	int* ptr_;
};

MyClass::MyClass( int i)
{
	ptr_ = new int( i);
}

MyClass::~MyClass()
{
	std::cout << ptr_ << std::endl;
	delete ptr_;
}

MyClass& MyClass::operator=(const MyClass& right)
{
	if( &right == this)
		return *this;

	ptr_ = new int( *(right.ptr_));
	return *this;
}

int main()
{
	MyClass obj;
	MyClass ob1;
	ob1 = obj;
}
