#include <iostream>
using namespace std;

class Employee
{
	char* name;
	int* working_hours;
	float* 	hourly_pay_rate;
	float salary;
public:

	Employee();
	Employee(const char*, int* ,float* );
	Employee(const Employee&);
	void setname(const char*);
	void setworking_hours(int*);
	void sethourly_pay_rate(float*);
	char* getname();
	int* getworking_hours();
	float* gethourly_pay_rate();
	void display();
	void AddSal();
	void AddWork();
	~Employee();
};