#include <iostream>
#include <ctime>

int main()
{
	time_t temp;
	time (&temp);
	const time_t curTime = temp;
	time (&temp);
	//curTime = temp;
}
