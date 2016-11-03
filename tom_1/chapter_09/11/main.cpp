#include "color.h"
#include "hue.h"
#include <iostream>

int main()
{
	Color color( red);
	std::cout << "color: " << color.getSetHue() << std::endl;
	color.getSetHue( yellow);
	std::cout << "color: " << color.getSetHue() << std::endl;
	color.getSetHue( blue);
	std::cout << "color: " << color.getSetHue() << std::endl;
	//color.setHue( green);	// no green in hue
}
