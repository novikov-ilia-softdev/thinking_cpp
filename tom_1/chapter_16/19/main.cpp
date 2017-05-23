#include "tcontainer.h"
#include "shape.h"
#include <iostream>

int main()
{
	typedef TContainer<Shape> ShapesContainer;
	typedef ShapesContainer::SmartPointer ShapesContainerIterator;
	ShapesContainer shapes;
	for( int i = 0; i < 4; i ++)
	{
		shapes.add( new Circle);
		shapes.add( new Square);
		shapes.add( new Triangle);
	}

	ShapesContainerIterator shapesIt = shapes.begin();
	do
	{
		shapesIt->draw();
		delete *shapesIt;
	}
	while( shapesIt++);

	std::cout << std::endl << "-----------------------------" << std::endl;

	typedef TContainer<int> IntContainer;
	typedef IntContainer::SmartPointer IntContainerIterator;
	IntContainer ints;
	for( int i = 0; i < 4; i ++)
	{
		ints.add( new int( i));
	}

	IntContainerIterator intIt = ints.begin();
	do
	{
		std::cout << **intIt << std::endl;
		delete *intIt;
	}
	while( intIt++);
}
