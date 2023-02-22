#pragma once
#include <iostream>
using namespace std;
class CPU
{
	char* companyName;
	int speed;
	float price;
public:
	CPU();
	CPU(const char* x, int y, float z);
	void setCompanyName(const char*);
	void setSpeed(int);
	void setPrice(float);
	char* getCompanyName(void);
	int getSpeed(void);
	float getPrice(void);
	void display();
	~CPU();
};

