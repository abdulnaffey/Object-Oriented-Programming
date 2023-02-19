#include "employee.h"
using namespace std;
int main()
{
	int code, joinAge, karantAge;
	employee t1,t2,t3,t4,t5;
	for (int i = 0; i < 5; i++)
	{
		
		cout << "Enter the data for employee " << i << " : \n" << "Employee's Code : "; cin >> code;
		cout << "Employee's Age at joining : "; cin >> joinAge;
		while (joinAge < 1)
		{
			cout << "Invalid Input !!! \nEnter Again : "; cin >> joinAge;
		}
		cout << "Employee's Current Age : "; cin >> karantAge;

		while ( karantAge < joinAge )
		{
			cout << "Invalid Input !!! \nEnter Again : "; cin >> karantAge;
		}
		switch (i) {
			case 0:
				t1.init(code, joinAge, karantAge);
				t1.calculateTenure();
				break;
			case 1:
				t2.init(code, joinAge, karantAge);
				t2.calculateTenure();
				break;
			case 2:
				t3.init(code, joinAge, karantAge);
				t3.calculateTenure();
				break;
			case 3:
				t4.init(code, joinAge, karantAge);
				t4.calculateTenure();
				break;
			case 4:
				t5.init(code, joinAge, karantAge);
				t5.calculateTenure();
				break;
		}
		system("cls");
	}
	t1.display();
	t2.display();
	t3.display();
	t4.display();
	t5.display();


}