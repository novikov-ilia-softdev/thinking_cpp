#include "iostream"

int main()
{
	std::cout <<"simple numbers:" << std::endl;

	for( int i = 2; i < 100; i++)
	{
		bool simple = true;
		for( int j = i - 1; j > 1; j--){
			if( !(i % j))
			{
				simple = false;
				break;
			}
		}
		if( simple)
			std::cout << i << std::endl;
	}
}
