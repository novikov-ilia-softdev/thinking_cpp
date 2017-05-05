#include <iostream>
#include <vector>
#include <fstream>

class StringStack{
public:
	void push( std::string* ptr)
	{
		vector_.push_back( ptr);
	}

	std::string* pop()
	{
		if( !vector_.size())
			return 0;

		int indexToDelete = vector_.size() - 1;
		std::string* ptr = vector_[ indexToDelete];
		vector_.erase( vector_.begin() + indexToDelete);
		return ptr;
	}

private:
	std::vector<std::string*> vector_;
};

int main()
{
	std::ifstream in( "main.cpp");
	std::string line;
	StringStack stack;
	while( getline( in, line))
	{
		stack.push( new std::string( line));
	}

	std::string* s;
	while( s = stack.pop())
	{
		std::cout << *s << std::endl;
		delete s;
	}
}
