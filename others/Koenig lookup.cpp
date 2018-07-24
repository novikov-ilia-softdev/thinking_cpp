// Koenig lookup

#include <iostream>

namespace NS
{
	class T {};
	void f( T t )
	{
		std::cout << "f was called!" << std::endl;
	}
}

NS::T parm;

int main( int argc, char* argv[] )
{
	f( parm );

	system("pause");
}