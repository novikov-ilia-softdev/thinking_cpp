#include "shape.h"
#include "tpstash.h"

int main()
{
	PStash<Shape> shapes;
	for( int i = 0; i < 4; i ++)
	{
		shapes.add( new Circle);
		shapes.add( new Square);
		shapes.add( new Triangle);
	}

	std::cout << "shapes.count() = " << shapes.count() << std::endl;
	shapes[ 2]->draw();
	delete shapes.remove( 2);
	std::cout << "shapes.count() = " << shapes.count() << std::endl;

	std::cout << std::endl << "after all:" << std::endl;
}
