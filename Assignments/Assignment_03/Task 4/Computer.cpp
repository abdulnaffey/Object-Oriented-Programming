#include "Computer.h"
Computer::Computer()
{
	x = 1;
	cout << "Computer class \n";
}
void Computer::display()
{
	cout << "X = " << x << " \n";
}

void Computer::setX(int y)
{
	x = y;
}

Laptop::Laptop()
{
	setX(5);
	cout << "Laptop class \n";
}

Tablet::Tablet()
{
	setX(6);
	cout << "Tablet class \n";
}

TwoInOneLaptop::TwoInOneLaptop()
{
	
	cout << "TwoInOneLaptop class \n";
}