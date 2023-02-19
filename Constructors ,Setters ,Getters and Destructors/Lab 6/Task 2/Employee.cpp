#include "Employee.h"

Employee::Employee()
{
	cout << "Constructor !! \n";
	name = new char;
	name[0] = '\0';
	working_hours = new int;
	*working_hours = 0;
	hourly_pay_rate = new float;
	*hourly_pay_rate = 0.0;
	salary = 0;
}
Employee::Employee(const char* x, int* y, float* z)
{
	cout << "Parametrized Constructor !! \n";
	int  l = 0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		l++;
	}

	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = x[i];
	}
	name[l] = '\0';

	working_hours = new int;
	*working_hours = *y;

	hourly_pay_rate = new float;
	*hourly_pay_rate = *z;
	salary = 0;
}
Employee::Employee(const Employee& p)
{
	cout << "Copy Constructor !! \n";
	int  l = 0;
	for (int i = 0; p.name[i] != '\0'; i++)
	{
		l++;
	}

	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = p.name[i];
	}
	name[l] = '\0';

	working_hours = new int;
	*working_hours = *p.working_hours;

	hourly_pay_rate = new float;
	*hourly_pay_rate = *p.hourly_pay_rate;
	salary = 0;
}
Employee::~Employee()
{
	cout << "Destructor !! \n";
	if (name[0] != '\0')
	{
		delete name;	
	}
	else
	{
		delete[] name;
	}
	delete working_hours;
	delete hourly_pay_rate;

	name = nullptr;
	working_hours = nullptr;
	hourly_pay_rate = nullptr;
}
void Employee::setname(const char* x)
{

	int  l = 0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		l++;
	}
	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = x[i];
	}
	name[l] = '\0';
}
void Employee::setworking_hours(int* x)
{
	working_hours = new int;
	*working_hours = *x;
}
void  Employee::sethourly_pay_rate(float* x)
{
	hourly_pay_rate = new float;
	*hourly_pay_rate = *x;
}
char* Employee::getname()
{
	char* temp;
	int  l = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
		l++;
	}
	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = name[i];
	}
	temp[l] = '\0';
	return temp;
}
int* Employee::getworking_hours()
{
	int* temp = new int;
	*temp = *working_hours;
	return temp;
}
float* Employee::gethourly_pay_rate()
{
	float* temp;
	temp = new float;
	*temp = *hourly_pay_rate;
	return temp;
}
void Employee::display()
{
	cout << "Name : " << name << endl;
	cout << "Working hours : " << *working_hours << endl;
	cout << "Hourly pay rate : " << *hourly_pay_rate << endl;
	salary = 30 * ( * working_hours * *hourly_pay_rate);
	if (salary < 500)
	{
		AddSal();
	}
	if (*working_hours > 6)
	{
		AddWork();
	}
	cout << "Salary : " << salary << endl;
}
void Employee::AddSal()
{
	salary += 10;
}
void Employee::AddWork()
{
	salary += 5;
}