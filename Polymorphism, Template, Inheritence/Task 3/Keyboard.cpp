#include "Keyboard.h"

Keyboard::Keyboard()
{
	companyName = nullptr;
	NumOfKeys = 0;
	price = 0.0;
}
Keyboard::Keyboard(const char* x, int y, float z)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	companyName = new char[l + 1];
	for (int i = 0; i < l; i++)
		companyName[i] = x[i];
	companyName[l] = '\0';
	NumOfKeys = y;
	price = z;
}
void Keyboard::setCompanyName(const char* x)
{
	int l;
	for (l = 0; x[l] != '\0'; l++);
	companyName = new char[l + 1];
	for (int i = 0; i < l; i++)
		companyName[i] = x[i];
	companyName[l] = '\0';
}
void Keyboard::setNumOfKeys(int x)
{
	NumOfKeys = x;
}
void Keyboard::setPrice(float x)
{
	price = x;
}
char* Keyboard::getCompanyName(void)
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
int Keyboard::getNumOfKeys(void)
{
	return NumOfKeys;
}
float Keyboard::getPrice(void)
{
	return price;
}
void Keyboard::display()
{
	cout << "Company Name :" << companyName << endl;
	cout << "Num Of Key :" << NumOfKeys << endl;
	cout << "Price :" << price << endl;
}
Keyboard::~Keyboard()
{
	if (companyName != nullptr)
	{
		delete[] companyName;
		companyName = nullptr;
	}
}
