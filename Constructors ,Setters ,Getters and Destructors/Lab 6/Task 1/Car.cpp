#include "Car.h"

Car::Car()
{
	cout << "Constructor !! \n";
	name = new char;
	name[0] = '\0';
	model = new char;
	model[0] = '\0';
	noOfDoor = new int;
	*noOfDoor = 0;
}
Car::Car(const char* x,const char* y,  int* z)
{
	cout << "Parametrized Constructor !! \n";
	int  l = 0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		l++;
	}
	
	name = new char[l+1];
	for (int i = 0; i < l; i++)
	{
		name[i] = x[i];
	}
	name[l] = '\0';
	
	l = 0;
	
	
	for (int i = 0; y[i] != '\0'; i++)
	{
		l++;
	}
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = y[i];
	}
	model[l] = '\0';
	l = 0;

	noOfDoor = new int;
	*noOfDoor = *z;
}
Car::Car(const Car& p)
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
	l = 0;

   l = 0;
	for (int i = 0; p.model[i] != '\0'; i++)
	{
		l++;
	}
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = p.model[i];
	}
	model[l] = '\0';
	l = 0;

	noOfDoor = new int;
	*noOfDoor = *p.noOfDoor;
}
Car::~Car()
{
	cout << "Destructor !! \n";
	if (name[0] != '\0')
	{
		delete name;
		delete model;
	}
	else
	{
		delete[] name;
		delete[] model;
	}
	delete noOfDoor;

	name = nullptr;
	model = nullptr;
	noOfDoor = nullptr;
}
void Car::setname(const char* x)
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
void Car::setmodel(const char* x)
{
	int  l = 0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		l++;
	}
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = x[i];
	}
	model[l] = '\0';
	
}
void Car::setdoor( int* x)
{
	noOfDoor = new int;
	*noOfDoor = *x;
}
char* Car::getname()
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
char* Car::getmodel()
{
	char* temp;
	int  l = 0;
	for (int i = 0; model[i] != '\0'; i++)
	{
		l++;
	}
	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = model[i];
	}
	temp[l] = '\0';
	return temp;
}
int* Car::getdoor()
{
	int* temp;
	temp = new int;
	*temp = *noOfDoor;
	return temp;
}
void Car::display()
{
	cout << "Name : " << name << endl;
	cout << "Model : " << model << endl;
	cout << "No of Doors : " << *noOfDoor << endl;
}