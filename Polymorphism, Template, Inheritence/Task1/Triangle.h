#pragma once
#include "Shape.h"

class Triangle : public Shape
{
	double area;
public:
	Triangle();
	Triangle(int l, int w);
	void calculateArea();
	void display();
	~Triangle();
};

