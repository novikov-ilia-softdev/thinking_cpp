#include <iostream>
#include "shape.h"
#include "tstack.h"

int main()
{
	Stack<Shape> shapes;
	shapes.push( new Circle);
	shapes.push( new Square, false);
	shapes.push( new Triangle);

	Stack<Shape>::iterator it = shapes.begin();
	while( it != shapes.end())
	{
		it->draw();
		it++;
	}

	std::cout << "shapes.getPeekBelongsToContainer(): " << shapes.getPeekBelongsToContainer() << std::endl;
	shapes.setPeekBelongsToContainer( false);
	std::cout << "shapes.getPeekBelongsToContainer(): " << shapes.getPeekBelongsToContainer() << std::endl;

	std::cout << std::endl << "----------------------------" << std::endl;
}
