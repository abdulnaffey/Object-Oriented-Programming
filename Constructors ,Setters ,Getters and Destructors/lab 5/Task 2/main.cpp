
#include "Time.h"

using namespace std;
int main()
{
	Time T[5];
	int h, m, s;
	for (int i = 0; i < 2; i++)
	{
		cout << "Input the time in 24 hour format (HH MM SS)\nEnter the " << i + 1 << " time : ";
		cin >> h >> m >> s;

		while (h > 23 || h < 0 || m > 59 || m < 0 || s > 59 || s < 0)
		{
			cout << "\nINLVALID INPUT!!!!!\nPlease Enter the valid time  " << i + 1 << " again....\n";
			cout << "Input the time in 24 hour format (HH MM SS)\nEnter the time : ";
			cin >> h >> m >> s;
			cout << endl;
		}
		
		system("cls");
			T[i].setTime(h, m, s);
	}
	cout << "1st Time object is : ";
	T[0].showTime(); cout << endl;
	cout << "2nd Time object is : ";
	T[1].showTime(); cout << endl;

	if (T[0].getTime() < T[1].getTime())
	{
		T[1].showTime(); cout << "Time is greater than "; T[0].showTime(); cout << endl;
	}
	else 
	{
		T[0].showTime(); cout << "Time is greater than "; T[1].showTime(); cout << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		T[0].tick();
	}
	cout << "1st Time object (after 9 ticks) is : "; T[0].showTime(); cout << endl;
	T[3] = { Time(10, 56, 05) }, T[4] = T[3];
	cout << "3rd Time object is : "; T[2].showTime(); cout << endl;
	cout << "4th Time object is : "; T[3].showTime(); cout << endl;
	cout << "5th Time object is : "; T[4].showTime(); cout << endl;


	system("PAUSE");
	return 0;
}