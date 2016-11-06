#include <iostream>

#define FIELD(a, index) int a##_value; int a##_index = index;

class Record{
public:
int getValueByIndex( int index)
	{
		switch (index)
		{
			case 0: return one_value;
			case 1: return two_value;
			case 2: return three_value;
			default: return -1;
		}

	}

	FIELD( one, 0);
	FIELD( two, 1);
	FIELD( three, 2);
};

int main( )
{
	Record record;
	record.one_value = 5;
	record.two_value = 7;
	record.three_value = 9;
	std::cout << "record.getValueByIndex( 1): " << record.getValueByIndex( 0) << std::endl;
	std::cout << "record.getValueByIndex( 0): " << record.getValueByIndex( 0) << std::endl;
	std::cout << "record.getValueByIndex( 2): " << record.getValueByIndex( 0) << std::endl;
	std::cout << "record.getValueByIndex( 3): " << record.getValueByIndex( 0) << std::endl;
}
