#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape{
public:
	virtual void draw() { std::cout << "Shape::draw" << std::endl; }
	virtual ~Shape() {}
};

class Circle: public Shape{
public:
	void draw() { std::cout << "Circle::draw" << std::endl; }
	~Circle() { std::cout << "~Circle" << std::endl; }
};

class Square: public Shape{
public:
	void draw() { std::cout << "Square::draw" << std::endl; }
	~Square() { std::cout << "~Square" << std::endl; }
};

class Triangle: public Shape{
public:
	void draw() { std::cout << "Triangle::draw" << std::endl; }
	~Triangle() { std::cout << "~Triangle" << std::endl; }
};

#endif // SHAPE_H
