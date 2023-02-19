#pragma once
#include "Shape.h"

class Circle : public Shape
{
	double area;
public:
	Circle();
	Circle(int r);
	void calculateArea();
	void display();
	~Circle();
};

