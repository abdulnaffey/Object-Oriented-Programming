#include "Circle.h"

Circle::Circle()
{
	area = 0;
}

Circle::Circle(int r) : Shape(r, r)
{
	area = 0;
}

void Circle::calculateArea()
{
	int radius = getLength();

	radius *= radius;

	area = radius * 3.14;
}

void Circle::display()
{
	cout << "The area of Circle is " << area << endl;
}

Circle::~Circle()
{

}
