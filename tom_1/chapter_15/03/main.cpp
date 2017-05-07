#include <iostream>

class Shape{
public:
	Shape() { }
	virtual void draw() { std::cout << "Shape::draw" << std::endl; };
	virtual ~Shape() {}
};

class Circle: public Shape{
public:

	void draw() { std::cout << "Circle::draw" << std::endl; }
};

class Square: public Shape{
public:
	void draw() { std::cout << "Square::draw" << std::endl; }
};

class Triangle: public Shape{
public:
	void draw() { std::cout << "Triangle::draw" << std::endl; }
};

void f( Shape& shape)
{
	shape.draw();
}

int main()
{
	Circle circle;
	f( circle);
}
