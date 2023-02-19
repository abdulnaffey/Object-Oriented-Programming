#include "Shape.h"

Shape::Shape()
{
	length = 0;
	width = 0;
}

Shape::Shape(int l, int w)
{
	length = l;
	width = w;
}

int Shape::getLength()
{
	return length;
}

int Shape::getWidth()
{
	return width;
}

Shape::~Shape()
{

}