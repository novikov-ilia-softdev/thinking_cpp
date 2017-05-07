#include <iostream>
#include <vector>

class Shape{
public:
	virtual void draw() { std::cout << "Shape::draw" << std::endl; }
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

int main()
{
	std::vector<Shape*> vector;
	vector.push_back( new Circle);
	vector.push_back( new Square);
	vector.push_back( new Triangle);

	for( int i = 0; i < vector.size(); i++)
	{
		vector[ i]->draw();
	}
}
