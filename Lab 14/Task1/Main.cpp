#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	Square sq(5);
	Rectangle rec(2, 3);
	Triangle tri(3, 10);
	Circle cir(10);

	sq.calculateArea();
	rec.calculateArea();
	tri.calculateArea();
	cir.calculateArea();

	sq.display();
	rec.display();
	tri.display();
	cir.display();

	return 0;
}