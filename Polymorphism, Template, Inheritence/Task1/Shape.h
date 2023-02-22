#pragma once
#include<iostream>
using namespace std;

class Shape
{
	int length, width;
public:
	Shape();
	Shape(int l, int w);
	int getLength();
	int getWidth();
	~Shape();
};