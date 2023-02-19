#include "Date.h"
 
int main()
{
	int x=5, y=6, z=7;
	
	//Default constructor
	Date d1,d2;
	cout <<"d1 -> " << d1.getDay() << " - " << d1.getMonth() << " - " << d1.getYear() << endl;



	

	// >> implementation
	cout << "Cin >> d2 -> ";
	cin >> d2;
	// << implementation
	cout << "cout << d2 -> ";
	cout << d2;

	int a, b;
	cout << "\n Enter any number of days to add with Default date : "; cin >> a;
	cout << "\n d2 + x  ->  " << d1 + a << endl;
	cout << "\n Enter any number of days to Subtracte from the given date : "; cin >> b;
	cout << " d2 - y  ->  " << d2 - b << endl;
	cout << " d2++     ->  " << d2++ << endl;
	cout << " ++d2     ->  " << ++d2 << endl;
	cout << " d2--     ->  " << d2-- << endl;
	cout << " --d2     ->  " << --d2 << endl;


       
	// != operator implementation
	
	cout <<"!= operator implementation"<<endl;

	if(d2 == d1)
	{ }
	else
	{
		cout << "d2 is not equal d1 " << endl;
	}


	// < operator implementation
	
	cout <<"< operator implementation"<<endl;

	if (d2 > d1)
	{
		cout << "d2 is not less than d1" << endl;
	}
	else
	{
		if (d2 == d1)
		{
			cout << "d2 is not less than d1" << endl;
		}
		else
		{
			cout << "d2 is less than d1" << endl;
		}
	}



	// <= operator implementation
	
		
		cout <<"<= operator implementation"<<endl;

		if (d1 > d2)
		{
			cout << "d1 is not less than or equal to d2" << endl;
		}
		else
		{
			cout << "d1 is less than or equal to d2 " << endl;
		}
	



	// >= operator implementation
		

		cout <<">= operator implementation"<<endl;

		if (d1 > d2)
		{
			cout << "d1 is greater than or equal to d2 " << endl;
		}
		else
		{
			cout << "d1 is not greater than or equal to d2 " << endl;
		}
	
	system("PAUSE");
}