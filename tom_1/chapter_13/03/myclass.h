#include <iostream>

class MyClass{
public:
	MyClass(): id_( count_++)
	{
		std::cout << "cstr, id = " << id_ << std::endl;
	}

	~MyClass()
	{
		std::cout << "dstr, id = " << id_ << std::endl;
	}

	friend std::ostream& operator<<( std::ostream& stream, const MyClass& i);

private:
	int id_;
	static int count_;
};

std::ostream& operator<<( std::ostream& stream, const MyClass& i)
{
	return stream << i.id_;
}

int MyClass::count_ = 0;
