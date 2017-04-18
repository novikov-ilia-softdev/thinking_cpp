#include <iostream>
#include <vector>

class Obj{
public:
	void f() const { std::cout << "f() i:" << i++ << std::endl; }
	void g() const { std::cout << "g() j:" << j++ << std::endl; }

private:
	static int i, j;
};

int Obj::i = 0;
int Obj::j = 0;

class SmartPointer;

class ObjContainer{
public:
	void add( Obj* objPtr) { container_.push_back( objPtr); }
	friend class SmartPointer;
	friend std::ostream& operator<<( std::ostream& stream, const SmartPointer& ptr);

private:
	std::vector<Obj*> container_;
};

class SmartPointer{
public:
	SmartPointer( ObjContainer &objContainer): objContainer_( objContainer), index_( 0) {}
	bool operator++()
	{
		if( objContainer_.container_.size() - 1 == index_)
			return false;

		index_++;
		return true;
	}

	bool operator++( int)
	{
		return operator++();
	}

	bool operator--()
	{
		if( !index_)
			return false;

		index_--;
		return true;
	}

	bool operator--( int)
	{
		return operator--();
	}

	Obj* operator->() const
	{
		if( index_ >= 0 && index_ < objContainer_.container_.size())
			return objContainer_.container_[ index_];

		return 0;
	}

	operator bool() const
	{
		std::cout << index_;
		return ( index_ >= 0 && index_ < objContainer_.container_.size());
	}

	friend std::ostream& operator<<( std::ostream& stream, const SmartPointer& ptr);

private:
	ObjContainer& objContainer_;
	int index_;
};

std::ostream& operator<<( std::ostream& stream, const SmartPointer& ptr)
{
	stream << ptr.objContainer_.container_[ ptr.index_];
}

int main()
{
	const int size = 10;
	Obj objs[ size];
	ObjContainer objContainer;
	for( int i = 0; i < size; i++)
	{
		objContainer.add( &objs[ i]);
	}

	SmartPointer smartPtr( objContainer);

	do
	{
		//std::cout << smartPtr << std::endl;
		smartPtr->f();
		smartPtr->g();
	}
	while( smartPtr++);

	std::cout << std::endl;

	do
	{
		//std::cout << smartPtr << std::endl;
		smartPtr->f();
		smartPtr->g();
	}
	while( smartPtr--);

}
