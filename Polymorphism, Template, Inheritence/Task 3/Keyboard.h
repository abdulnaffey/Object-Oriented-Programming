#pragma once
#include <iostream>
using namespace std;
class Keyboard
{
	char* companyName;
	int NumOfKeys;
	float price;
public:
	Keyboard();
	Keyboard(const char* x, int y, float z);
	void setCompanyName(const char*);
	void setNumOfKeys(int);
	void setPrice(float);
	char* getCompanyName(void);
	int getNumOfKeys(void);
	float getPrice(void);
	void display();
	~Keyboard();
};

