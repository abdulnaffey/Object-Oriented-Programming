#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class bank{
private:
	string name;
	int account_number;
	string type;
	double balance;
public:
	void setinputs(string ,int,string,double);
	void display();
	void deposit(double);
	void withdrawn(double);
};
