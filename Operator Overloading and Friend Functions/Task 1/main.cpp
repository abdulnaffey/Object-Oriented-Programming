#include "Time.h"
 
int main()
{
	int x=5, y=6, z=7;
	
	//parameterized constructor
	Time t1(&x, &y, &z);
	cout <<"t1 -> " << *t1.getHours() << " : " << *t1.getMinutes() << " : " << *t1.getSeconds() << endl;
	
	//Copy Constructor and default constructor
	Time t2 = t1,t3;
	cout << "t2 -> " << *t2.getHours() << " : " << *t2.getMinutes() << " : " << *t2.getSeconds()<<endl;
	
	
	// = operator
	t2 = t3;
	cout << "t2 after (t2=t3) -> " << *t2.getHours() << " : " << *t2.getMinutes() << " : " << *t2.getSeconds() << endl;

	Time t4 ;


	// >> implementation
	cout << "Cin >> t4 -> ";
	cin >> t4;
	// << implementation
	cout << "cout << t4 -> ";
	cout << t4;

	cout << " t4 + t1  ->  " << t4 + t1 << endl;
	cout << " t1 - t4  ->  " << t1 - t4 << endl;
	cout << " t1++     ->  " << t1++ << endl;
	cout << " ++t1     ->  " << ++t1 << endl;
	cout << " t1--     ->  " << t1-- << endl;
	cout << " --t1     ->  " << --t1 << endl;
	

	// != operator implementation
	
	cout << "\n!= operator implementation\n" << endl;
	
	if (t3 == t4)
	{
	}
	else
	{
		cout << "T3 is not equal to T4" << endl;
	}


	// < operator implementation
	
	cout << "\n< operator implementation\n" << endl;
	
	if (t3 > t4)
	{
		cout << "t3 is not less than t4" << endl;
	}
	else
	{
		if (t3 == t4)
		{
			cout << "t3 is not less than t4" << endl;
		}
		else
		{
			cout << "T3 is less than T4" << endl;
		}
	}
	

	// <= operator implementation
	
	cout << "\n<= operator implementation\n" << endl;


		if (t3 > t2)
		{
			cout << "T3 is not less than or equals to T2" << endl;
		}
		else
		{
			cout << "T3 is less than or equals to T2 " << endl;
		}
	
	


	// >= operator implementation
	
		
		cout << "\n>= operator implementation\n" << endl;
		
		
		if (t3 > t2)
		{
			cout << "T3 is greater than or equals to T2 " << endl;
		}
		else
		{
			cout << "T3 is not greater than or equals to T2 " << endl;
		}
	
	
	


	system("PAUSE");
}