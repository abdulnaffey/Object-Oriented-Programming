#include "Date.h"
bool leap(int x,int y,int z)
{
	bool  leap = 0, chk = 0;
	if (z > 99)
	{
		if (z % 4 == 0)
		{
			if (z % 100 == 0)
			{
				if (z % 400 == 0)
				{
					chk = 1;
				}
			}
			chk = 1;
		}
	}
	else
	{
		if (z % 4 == 0)
		{
			chk = 1;
		}
	}

	if (chk == 1)
	{
		leap = 1;
	}
	
	return leap;
}
Date::Date()
{
	day = 1;
	month = 1;
	year = 0;
}
int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
bool Date::operator==(const Date &p)
{
	bool chk ;
	if (day == p.day && month == p.month && year == p.year)
		chk = 1;
	else
		chk = 0;
	return chk;
}
bool Date::operator>(const Date &p)
{
	bool chk;
	if (year > p.year)
	{
		chk = 1;
	}
	else if (year == p.year)
	{
		if (month > p.month)
		{
			chk = 1;
		}
		else if (month == p.month)
		{
			if (day > p.day)
				chk = 1;
			else if (day == p.day)
				chk = 0;
			else
				chk = 0;
		}
		else
			chk = 0;
	}
	else
		chk = 0;

	return chk;
}
 ostream&  operator << (ostream& os, const Date&p)
{
	 os << p.day<< " - " << p.month<< " - " << p.year<< endl;
	 return os;
}
 istream& operator>>(istream&is, Date&p)
 {
 	 int x, y, z;
	 
	
	 bool valid = 0;
	 do {
		 cout << "Enter the Date : (xx xx xxxx)";
		 is >> p.day >> p.month >> p.year;
		 x = p.day;
		 y = p.month;
		 z = p.year;
		 while ((x < 1 || x > 31) || (y < 1 || y > 12) || (z < 0))
		 {
			 cout << "Invalid Input !!!\nDay must be less than 31\nMonth must be less than 12\nYear must be greater than 0\n \nEnter Again : ";
			 is >> p.day >> p.month >> p.year;
			 x = p.day;
			 y = p.month;
			 z = p.year;
		 }
		 bool  leap = 0, chk = 0;
		 if (z > 99)
		 {
			 if (z % 4 == 0)
			 {
				 if (z % 100 == 0)
				 {
					 if (z % 400 == 0)
					 {
						 chk = 1;
					 }
				 }
				 chk = 1;
			 }
		 }
		 else
		 {
			 if (z % 4 == 0)
			 {
				 chk = 1;
			 }
		 }

		 if (chk == 1)
		 {
			 leap = 1;
		 }
		 if (leap == 1)
		 {
			 if (y == 2 && x > 29)
			 {
				 cout << "Invalid Input !!!\nIn leap year Feburary can't have more than 29 days \nEnter Again : ";
				 valid = 0;
			 }
			 else if ((y == 4 || y == 6 || y == 9 || y == 11) && x > 30)
			 {
				 cout << "Invalid Input !!!\nThe month 4, 6, 9 and 11 can't have more than 30 days \nEnter Again : ";
				 valid = 0;
			 }
			 else
			 {
				 valid=1;
			 }
		 }
		 else
		 {
			 if (y == 2 && x > 28)
			 {
				 cout << "Invalid Input !!!\nFeburary can't have more than 28 days \nEnter Again : ";
				 valid = 0;
			 }
			 else if ((y == 4 || y == 6 || y == 9 || y == 11) && x > 30)
			 {
				 cout << "Invalid Input !!!\nThe month 4, 6, 9 and 11 can't have more than 30 days \nEnter Again : ";
				 valid = 0;
			 }
			 else
			 {
				 valid = 1;
			 }
		 }

	 } while (valid == 0);
	 return is;
 }
 Date Date:: operator+(int d)
 {
	 for (int i = 0; i < d; i++)
	 {
		 bool valid = leap(day, month, year);
		 day++;
		 if (month == 12 && day > 31)
		 {
			 day = 1;
			 month = 1;
			 year++;
		 }
		 else if (month == 2)
		 {
			 if (valid == 1)
			 {
				 if (day > 29)
				 {
					 day = 1;
					 month++;
				 }
			 }
			 else
			 {
				 if (day > 28)
				 {
					 day = 1;
					 month++;
				 }
			 }
		 }
         else if (month == 4 || month == 6 || month == 9 || month == 11)
		 {
			 if (day > 30)
			 {
				 day = 1;
				 month++;
			 }
			 
		 }
		 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
		 {
			 if (day > 31)
			 {
				 day = 1;
				 month++;
			 }
		 }

	 }
	 return *this;
 }
 Date Date::operator-(int d)
 {
	 for (int i = 0; i < d; i++)
	 {
		 day--;
		 if (day < 1)
		 {
			 month--;
			 if (month == 0)
			 {
				 year--;
				 month = 12;
				 day = 31;
			 }
			 else if (month == 2)
			 {
				 bool valid = leap(day,month,year);
				 if (valid == 1)
				 {
					 day = 29;
				 }
				 else
				 {
					 day = 28;
				 }
			 }
			 else if (month == 4|| month == 6||month == 9||month == 11)
			 {
				 day = 30;
			 }
			 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
			 {
				 day = 31;
			 }
		 }
		
	 }
	 return *this;
 }
 Date Date:: operator++()
 {
	 bool valid = leap(day, month, year);
	 day++;
	 if (month == 12 && day > 31)
	 {
		 day = 1;
		 month = 1;
		 year++;
	 }
	 else if (month == 2)
	 {
		 if (valid == 1)
		 {
			 if (day > 29)
			 {
				 day = 1;
				 month++;
			 }
		 }
		 else
		 {
			 if (day > 28)
			 {
				 day = 1;
				 month++;
			 }
		 }
	 }
	 else if (month == 4 || month == 6 || month == 9 || month == 11)
	 {
		 if (day > 30)
		 {
			 day = 1;
			 month++;
		 }

	 }
	 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	 {
		 if (day > 31)
		 {
			 day = 1;
			 month++;
		 }
	 }

	 return *this;
 }
 Date Date:: operator--()
 {
	 day--;
	 if (day < 1)
	 {
		 month--;
		 if (month == 0)
		 {
			 year--;
			 month = 12;
			 day = 31;
		 }
		 else if (month == 2)
		 {
			 bool valid = leap(day, month, year);
			 if (valid == 1)
			 {
				 day = 29;
			 }
			 else
			 {
				 day = 28;
			 }
		 }
		 else if (month == 4 || month == 6 || month == 9 || month == 11)
		 {
			 day = 30;
		 }
		 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
		 {
			 day = 31;
		 }
	 }
	 return *this;
 }
 Date Date:: operator++(int)
 {
	 Date t=*this;

	 bool valid = leap(day, month, year);
	 day++;
	 if (month == 12 && day > 31)
	 {
		 day = 1;
		 month = 1;
		 year++;
	 }
	 else if (month == 2)
	 {
		 if (valid == 1)
		 {
			 if (day > 29)
			 {
				 day = 1;
				 month++;
			 }
		 }
		 else
		 {
			 if (day > 28)
			 {
				 day = 1;
				 month++;
			 }
		 }
	 }
	 else if (month == 4 || month == 6 || month == 9 || month == 11)
	 {
		 if (day > 30)
		 {
			 day = 1;
			 month++;
		 }

	 }
	 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	 {
		 if (day > 31)
		 {
			 day = 1;
			 month++;
		 }
	 }

	 return t;
 }
 Date Date:: operator--(int)
 {
	 Date t = *this;

	 day--;
	 if (day < 1)
	 {
		 month--;
		 if (month == 0)
		 {
			 year--;
			 month = 12;
			 day = 31;
		 }
		 else if (month == 2)
		 {
			 bool valid = leap(day, month, year);
			 if (valid == 1)
			 {
				 day = 29;
			 }
			 else
			 {
				 day = 28;
			 }
		 }
		 else if (month == 4 || month == 6 || month == 9 || month == 11)
		 {
			 day = 30;
		 }
		 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
		 {
			 day = 31;
		 }
	 }
	 return t;
 }
 

