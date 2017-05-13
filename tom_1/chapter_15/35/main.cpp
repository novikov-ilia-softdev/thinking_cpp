#include <iostream>
#include <typeinfo>

enum type { ShapeType, CircleType, SquareType };

class Shape {
public:
	virtual type whatAmI() const { return ShapeType; }
	virtual ~Shape() {}
};
class Circle: public Shape {
public:
	type whatAmI() const { return CircleType; }
};

class Square: public Shape {
public:
	type whatAmI() const { return SquareType; }
};

class Other {};

int main()
{
	/*
	Circle c;
	Shape* s = &c;
	s = static_cast<Shape*>(&c);

	Circle* cp = 0;
	Square* sp = 0;

	std::cout << "typeid(*s).name(): " << typeid(*s).name() << std::endl;
	std::cout << "typeid(cp).name(): " << typeid(cp).name() << std::endl;
	std::cout << "typeid(sp).name(): " << typeid(sp).name() << std::endl;
	std::cout << "typeid(Circle).name(): " << typeid(Circle).name() << std::endl;
	std::cout << "typeid(Square).name(): " << typeid(Square).name() << std::endl;

	if( typeid(*s) == typeid(Circle))
		cp = static_cast<Circle*>(s);

	if( typeid(*s) == typeid(Square))
		sp = static_cast<Square*>(s);

	if( cp != 0)
		std::cout << "It is a circle!" << std::endl;
	if( sp != 0)
		std::cout << "It is a square!" << std::endl;

	//Other* op = static_cast<Other*>(s);
	//Other* op = (Other*)s;
	 */

	Circle c;
	Circle circle;
	Square square;
	Shape* s = &c;
	s = static_cast<Shape*>(&c);

	Circle* cp = 0;
	Square* sp = 0;

	if( s->whatAmI() == circle.whatAmI())
		cp = static_cast<Circle*>(s);

	if( s->whatAmI() == square.whatAmI())
		sp = static_cast<Square*>(s);

	if( cp != 0)
		std::cout << "It is a circle!" << std::endl;
	if( sp != 0)
		std::cout << "It is a square!" << std::endl;
}
