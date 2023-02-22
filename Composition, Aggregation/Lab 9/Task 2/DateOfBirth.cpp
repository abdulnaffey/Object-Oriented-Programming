#include "DateOfBirth.h"

DateOfBirth::DateOfBirth()
{
	day = 0;
	month = 0;
	year = 0;
}

DateOfBirth::DateOfBirth(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void DateOfBirth::setDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

int DateOfBirth::getDay()
{
	return day;
}

int DateOfBirth::getMonth()
{
	return month;
}

int DateOfBirth::getYear()
{
	return year;
}

DateOfBirth::~DateOfBirth()
{

}