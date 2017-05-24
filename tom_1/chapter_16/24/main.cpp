#include <vector>
#include <iostream>

#include "tpstash.h"
#include "tstack.h"
#include "shape.h"

class Drawing : public PStash<Shape> {
public:
	~Drawing() { std::cout << "~Drawing" << std::endl;}
};

class Plan : public Stack<Shape> {
public:
	~Plan() { std::cout << "~Plan" << std::endl;}
};

class Schematic : public std::vector<Shape*> {
public:
	~Schematic() { std::cout << "~Schematic" << std::endl;}
};

template<class Iter>
void drawAll( Iter start, Iter end)
{
	while( start != end)
	{
		(*start)->draw();
		start++;
	}
}

template<class Iter>
void eraseAll( Iter start, Iter end)
{
	while( start != end)
	{
		(*start)->erase();
		start++;
	}
}

int main()
{
	Drawing* d = new Drawing;
	d->add( new Circle);
	d->add( new Square);
	d->add( new Triangle);
	//drawAll( d->begin(), d->end());
	eraseAll( d->begin(), d->end());
	delete d;

	std::cout << std::endl << "------------------------" << std::endl;

	Plan* p = new Plan;
	p->push( new Circle);
	p->push( new Square);
	p->push( new Triangle);
	//drawAll( p->begin(), p->end());
	eraseAll( p->begin(), p->end());
	delete p;

	std::cout << std::endl << "------------------------" << std::endl;

	Schematic* s = new Schematic;
	s->push_back( new Circle);
	s->push_back( new Square);
	s->push_back( new Triangle);
	//drawAll( s->begin(), s->end());
	eraseAll( s->begin(), s->end());
	delete s;

	std::cout << std::endl << "------------------------" << std::endl;

	Shape* sarray[] = { new Circle, new Square, new Triangle };
	//drawAll( sarray, sarray + sizeof( sarray) / sizeof( *sarray));
	eraseAll( sarray, sarray + sizeof( sarray) / sizeof( *sarray));
}
