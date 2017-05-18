#include <iostream>
#include "shape.h"
#include "tstack.h"

int main()
{
	Stack<Shape> shapes;
	shapes.push( new Circle);
	shapes.push( new Square);
	shapes.push( new Triangle);

	Shape* shape = shapes.pop();
	shape->draw();

	Stack<Shape>::iterator it = shapes.begin();
	while( it != shapes.end())
	{
		it->draw();
		it++;
	}
}
