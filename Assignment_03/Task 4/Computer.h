#include <iostream>
using namespace std;
class Computer
{
	int x;
public:
	Computer();
	void setX(int);
	void display();
};
class Laptop : virtual public  Computer
{
public:
	 Laptop();
};
class Tablet : virtual public  Computer
{
public:
	Tablet();
};
class TwoInOneLaptop:public Laptop,public Tablet
{
public:
	TwoInOneLaptop();
};

