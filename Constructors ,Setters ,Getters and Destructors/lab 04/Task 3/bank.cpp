#include "bank.h"
#include <iostream>
using namespace std;

void bank::setinputs(string n, int acc_n, string t, double bal){

	 name=n;
	 account_number = acc_n;
	 type = t;
	 balance = bal;
}
void bank::deposit(double ok){

	balance = balance + ok;
	cout << "The updated balance after deposit of "<<ok<<" is : " << balance<<endl;
}
void bank :: display(){

	 cout << "Name : "<<name;
	 cout << endl;
	 cout << "Account Number : " << account_number;
	 cout << endl;
	 cout << "type : " << type;
	 cout << endl;
	 cout << "Curent Balance : " << balance;
	 cout << endl;
}
void bank::withdrawn(double ok){

	balance = balance - ok;
	cout << "The updated balance after withdrawn of " << ok << " is : " << balance << endl;
}