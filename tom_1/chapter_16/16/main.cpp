#include "shape.h"
#include "tpstash.h"
#include "tstack.h"

int main()
{
	typedef PStash<Shape> ShapesStash;
	typedef ShapesStash::iterator ShapesStashIterator;
	ShapesStash shapesStash;
	for( int i = 0; i < 4; i ++)
	{
		shapesStash.add( new Circle);
		shapesStash.add( new Square);
		shapesStash.add( new Triangle);
	}

	ShapesStashIterator stashIt = shapesStash.begin();
	for(; stashIt != shapesStash.end(); stashIt++)
		stashIt->draw();

	std::cout << std::endl << "--------------------------------" << std::endl;

	typedef Stack<Shape> ShapesStack;
	typedef ShapesStack::iterator ShapesStackIterator;
	ShapesStack shapesStack;
	for( int i = 0; i < 4; i ++)
	{
		shapesStack.push( new Circle);
		shapesStack.push( new Square);
		shapesStack.push( new Triangle);
	}
	ShapesStackIterator stackIt = shapesStack.begin();
	for(; stackIt != shapesStack.end(); stackIt++)
		stackIt->draw();

	std::cout << std::endl << "--------------------------------" << std::endl;
}
