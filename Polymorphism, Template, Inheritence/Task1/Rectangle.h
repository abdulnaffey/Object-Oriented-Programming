#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
	double area;
public:
	Rectangle();
	Rectangle(int l, int w);
	void calculateArea();
	void display();
	~Rectangle();
};

