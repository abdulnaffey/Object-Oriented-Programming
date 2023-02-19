#include<iostream>
using namespace std;

class employee
{
private:
	int employeeCode, ageAtJoining, currentAge, tenure;
public:
	void init(int, int, int);
	void calculateTenure();
	void display();
};