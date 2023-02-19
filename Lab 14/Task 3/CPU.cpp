#include "CPU.h"

CPU::CPU()
{
	companyName = nullptr;
	speed = 0;
	price = 0.0;
}
CPU::CPU(const char* x, int y, float z)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	companyName = new char[l + 1];
	for (int i = 0; i < l; i++)
		companyName[i] = x[i];
	companyName[l] = '\0';
	speed = y;
	price = z;
}
void CPU::setCompanyName(const char* x)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	companyName = new char[l + 1];
	for (int i = 0; i < l; i++)
		companyName[i] = x[i];
	companyName[l] = '\0';
}
void CPU::setSpeed(int x)
{
	speed = x;
}
void CPU::setPrice(float x)
{
	price = x;
}
char* CPU::getCompanyName(void)
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
int CPU::getSpeed(void)
{
	return speed;
}
float CPU::getPrice(void)
{
	return price;
}
void CPU::display()
{
	cout << "Company Name :" << companyName << endl;
	cout << "Speed :" << speed << endl;
	cout << "Price :" << price << endl;
}
CPU::~CPU()
{
	if (companyName != nullptr)
	{
		delete[] companyName;
		companyName = nullptr;
	}
}
