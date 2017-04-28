#include <iostream>
#include <new>
#include <vector>
#include <boost/lexical_cast.hpp>

class MyClass{
public:
	void* operator new( size_t, const std::string& str)
	{
		vector_.push_back( str);
		return ::new MyClass;
	}

	static void printArgs()
	{
		for( int i = 0; i < vector_.size(); i++)
		{
			std::cout << vector_[ i] << std::endl;
		}
	}

private:
	typedef std::vector<std::string> StringVector;
	static StringVector vector_;
};

MyClass::StringVector MyClass::vector_;

int main()
{
	new( __FILE__) MyClass;
	new( boost::lexical_cast<std::string>( __LINE__)) MyClass;
	new( boost::lexical_cast<std::string>( __LINE__)) MyClass;
	MyClass::printArgs();
}
