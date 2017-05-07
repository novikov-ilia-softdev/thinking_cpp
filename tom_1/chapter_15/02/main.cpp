#include <iostream>
#include <vector>

class Shape{
public:
	Shape() { std::cout << "Shape::Shape" << std::endl; draw(); }
	virtual void draw() = 0;
	virtual ~Shape() {}
};

void Shape::draw()
{
	std::cout << "Shape::draw" << std::endl;
}

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
	//Shape shape;
	std::vector<Shape*> vector;
	vector.push_back( new Circle);
	vector.push_back( new Square);
	vector.push_back( new Triangle);

	for( int i = 0; i < vector.size(); i++)
	{
		vector[ i]->draw();
	}
}
