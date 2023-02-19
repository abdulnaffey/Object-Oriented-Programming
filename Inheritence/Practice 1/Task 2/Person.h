#include <iostream>
using namespace std;
static int employeeCount;
static int baseballPlayerCount;

class Person
{
	char* name;
	int   age;
    
public:
	Person(const char*,int);
	void addEmployee();
	void addBaseball();
	static void display();
      ~Person();
};
class Employee:public Person 
{
	int employeeId;
	double employeeSalary;
public:
	      Employee(const char*,int,int ,double);
		  Employee(const char*, int);
};
class  BaseballPlayer :public Employee
{
	float battingAverage;
	int totalRuns;
public:
	      BaseballPlayer(const char *,int ,float,int);
};
