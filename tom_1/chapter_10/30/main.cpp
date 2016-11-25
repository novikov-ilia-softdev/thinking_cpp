#include "myclass.h"

int main()
{
	MyNamespace::MyClass arr[ 10];

	for( int i = 0; i < 10; i++)
	{
		arr[ i].print();
	}
}
