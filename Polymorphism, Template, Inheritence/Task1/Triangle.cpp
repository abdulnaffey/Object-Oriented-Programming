#include "Triangle.h"

Triangle::Triangle()
{
	area = 0;
}

Triangle::Triangle(int l, int w) : Shape(l, w)
{
	area = 0;
}

void Triangle::calculateArea()
{
	int len = getLength();
	int width = getWidth();

	area = 0.5 * len * width;
}

void Triangle::display()
{
	cout << "The area of Triangle is " << area << endl;
}

Triangle::~Triangle()
{

}