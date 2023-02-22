#pragma once
#include "Shape.h"

class Square : public Shape
{
	double area;
public:
	Square();
	Square(int l);
	void calculateArea();
	void display();
	~Square();
};

