#include "Monitor.h"
Monitor::Monitor()
{
	companyName = nullptr;
	size = 0;
	price = 0.0;
}
Monitor::Monitor(const char* x,int y,float z)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	companyName = new char[l + 1];
	for(int i=0;i<l;i++)
		companyName[i] = x[i];
	companyName[l] = '\0';
	size = y;
	price = z;
}
void Monitor::setCompanyName(const char* x)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	companyName = new char[l + 1];
	for (int i = 0; i < l; i++)
		companyName[i] = x[i];
	companyName[l] = '\0';
}
void Monitor::setSize(int x)
{
	size = x;
}
void Monitor::setPrice(float x)
{
	price = x;
}
char* Monitor::getCompanyName(void)
{
	char* t;
	int l;
	for (l = 0; companyName[l] != '\0'; l++);
	t = new char[l + 1];
	for (int i = 0; i < l; i++)
		t[i] = companyName[i];
	t[l] = '\0';
	return t;
}
int Monitor::getSize(void)
{
	return size;
}
float Monitor::getPrice(void)
{
	return price;
}
void Monitor::display()
{
	cout << "Company Name :" << companyName << endl;
	cout << "Size :" << size << endl;
	cout << "Price :" << price << endl;
}
Monitor::~Monitor()
{
	if (companyName != nullptr)
	{
		delete[] companyName;
		companyName = nullptr;
	}
}
