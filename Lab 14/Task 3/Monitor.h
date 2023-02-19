#pragma once
#include<iostream>
using namespace std;
class Monitor
{
	char* companyName;
	int size;
	float price;
public:
	Monitor();
	Monitor(const char* x, int y, float z);
	void setCompanyName(const char*);
	void setSize(int);
	void setPrice(float);
	char* getCompanyName(void);
	int getSize(void);
	float getPrice(void);
	void display();
	~Monitor();
};

