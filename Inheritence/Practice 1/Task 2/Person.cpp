#include "Person.h"


Person::Person(const char* x,int y)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = x[i];
	}
	name[l] = '\0';
	age = y;
}

Person::~Person()
{
 if(name != nullptr)
  {
    delete[] name;
    name = nullptr;
  }
}
void Person::addBaseball()
{
	baseballPlayerCount++;
}
void Person::addEmployee()
{
	employeeCount++;
}
void Person::display()
{
	cout << "Total employees are : " << employeeCount << endl;
	cout << "Total Baseball Players are : " << baseballPlayerCount << endl;
}

Employee::Employee(const char* n, int a, int i, double s):Person (n,a)
{
	addEmployee();
	employeeId = i;
	employeeSalary = s;
}
Employee::Employee(const char* n, int a) :Person(n, a)
{
}

BaseballPlayer::BaseballPlayer(const char* n, int a, float b, int t):Employee(n, a)
{
	addBaseball();
	 battingAverage = b;
	 totalRuns=t;
}
