#include "Car.h"

int main()
{
	int x = 4;
	Car c1;
	Car c2("Honda", "City", &x);
	Car c3 = c1;
	Car c4(c2);

	c1.display();
	c2.display();
	c3.display();
	cout << "Name : " << c4.getname() << "\nModel : " << c4.getmodel() << "\nNo of Doors : " << *c4.getdoor() << endl;
}