#include "Square.h"

Square::Square()
{
	area = 0;
}

Square::Square(int l) : Shape(l, l)
{
	area = 0;
}

void Square::calculateArea()
{
	int len = getLength();
	int len1 = getLength();

	area = len * len1;
}

void Square::display()
{
	cout << "The Area of square is " << area << endl;
}

Square::~Square()
{

}