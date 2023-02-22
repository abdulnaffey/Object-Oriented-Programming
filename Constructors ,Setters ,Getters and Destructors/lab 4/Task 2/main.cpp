#include "dayType.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){

	string hm;
	int ok;
	cout << "Enter the day name (sun for Sunday)";
	cin >> hm;
	dayType t1;
	
	t1.setday(hm);
	cout <<"Present day is : "<< t1. getday();
	cout << endl;
	cout << "Next day is : " << t1.nextDay();
	cout << endl;
	cout << "Previous day is : " << t1.previousDay();
	cout << endl;
	cout << "Enter the number of days you want to jump from today : "; cin >> ok;
	cout << "After " << ok << " days the day is : " << t1.calculateDay(ok);
	cout << endl;

	system("PAUSE");
	return 0;

}