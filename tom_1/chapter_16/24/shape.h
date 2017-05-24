#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape{
public:
	virtual void draw() = 0;
	virtual void erase() = 0;
	virtual ~Shape() = 0;
};

Shape::~Shape() {}

class Circle: public Shape{
public:
	void draw() { std::cout << "Circle::draw" << std::endl; }
	void erase() { std::cout << "Circle::erase" << std::endl; }
	~Circle() { std::cout << "~Circle" << std::endl; }
};

class Square: public Shape{
public:
	void draw() { std::cout << "Square::draw" << std::endl; }
	void erase() { std::cout << "Square::erase" << std::endl; }
	~Square() { std::cout << "~Square" << std::endl; }
};

class Triangle: public Shape{
public:
	void draw() { std::cout << "Triangle::draw" << std::endl; }
	void erase() { std::cout << "Triangle::erase" << std::endl; }
	~Triangle() { std::cout << "~Triangle" << std::endl; }
};

#endif // SHAPE_H
