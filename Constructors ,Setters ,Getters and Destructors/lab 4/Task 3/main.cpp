#include "bank.h"
#include <iostream>
using namespace std;
int main(){
	double decession=1,get=-1 ;
	bank t1;
	t1.setinputs("Abdullah", 1106, "current", 2500.25);
	while (decession != 0){
	
		t1.display();
		cout << "Enter 1 to deposit and 0 to withdrawn :"; cin >> get;
		if (get == 1){
			cout << "Enter the value : "; cin >> get;
			t1.deposit(get);
		}
		else if (get == 0){
			cout << "Enter the value : "; cin >> get;
			t1.withdrawn(get);
		}
		cout << " Do you want to do anymore transactions : ";
			cin >> decession;
		system("cls");
	}
	system("PAUSE");


}