#include <iostream>
using namespace std;

class DateOfBirth
{
	int day, month, year;

public:
	DateOfBirth();
	DateOfBirth(int d, int m, int y);
	~DateOfBirth();

	void setDate(int d, int m, int y);
	int getDay();
	int getMonth();
	int getYear();
};