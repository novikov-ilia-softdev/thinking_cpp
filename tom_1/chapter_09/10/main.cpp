#include "color.h"
#include "hue.h"
#include <iostream>

int main()
{
	Color color( red);
	std::cout << "color: " << color.getHue() << std::endl;
	color.setHue( yellow);
	std::cout << "color: " << color.getHue() << std::endl;
	color.setHue( blue);
	std::cout << "color: " << color.getHue() << std::endl;
	//color.setHue( green);	// no green in hue
}
