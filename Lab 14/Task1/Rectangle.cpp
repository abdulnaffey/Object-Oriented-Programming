#include "Rectangle.h"

Rectangle::Rectangle()
{
	area = 0;
}

Rectangle::Rectangle(int l, int w) : Shape(l, w)
{
	area = 0;
}

void Rectangle::calculateArea()
{
	int len = getLength();
	int width = getWidth();

	area = len * width;
}

void Rectangle::display()
{
	cout << "The area of Rectangle is " << area << endl;
}

Rectangle::~Rectangle()
{
}