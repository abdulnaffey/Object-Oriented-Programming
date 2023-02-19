#include <iostream>
using namespace std;
class automobile {
private:
	string serial;
	int year_of_manufacture;
	char material[20];
	int quantity;
public:
	void sets(string);
	void sety(int);
	void setm(char*);
	void setq(int);
	string gets();
	int gety();
	char* getm();
	int getq();
 };