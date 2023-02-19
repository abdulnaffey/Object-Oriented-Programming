#include "Employee.h"

int main()
{
	int x = 4;
	float y= 15;
	Employee c1;
	Employee c2("Honda", &x,&y);
	Employee c3 = c1;
	Employee c4(c2);

	c1.display();
	c2.display();
	c3.display();
	cout << "Name : " << c4.getname() << "\nWorking hours : " << *c4.getworking_hours() << "\nHourly pay rate : " << *c4.gethourly_pay_rate() << endl;
}