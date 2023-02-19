#include "Time.h"

Time::Time()
{
	hours = new int;
	minutes = new int;
	seconds = new int;
	*hours = 0;
	*minutes = 0;
	*seconds = 0;
}
Time::Time(const Time& p)
{
	hours = new int;
	minutes = new int;
	seconds = new int;
	*hours = *p.hours;
	*minutes = *p.minutes;
	*seconds = *p.seconds;
}
Time::Time(int* x, int *y, int* z)
{
	hours = new int;
	minutes = new int;
	seconds = new int;
	if (*x >= 1 && *x <= 12)
		*hours = *x;
	else
		*hours = 0;
	if (*x >= 0 && *x <= 59)
		*minutes = *y;
	else
		*minutes = 0;
	if (*x >= 0 && *x <= 59)
		*seconds = *z;
	else
		*seconds = 0;
}
void Time:: operator=(const Time &p)
{
	hours = new int;
	minutes = new int;
	seconds = new int;
	*hours = *p.hours;
	*minutes = *p.minutes;
	*seconds = *p.seconds;
	//return *this;
}
Time ::~Time()
{
	delete hours;
	delete minutes;
	delete seconds;
	hours = NULL;
	minutes = NULL;
	seconds = NULL; 
}
int* Time::getHours()
{
	int *t=new int;
	*t = *hours;
	return t;
}
int* Time::getMinutes()
{
	int *t = new int;
	*t = *minutes;
	return t;
}
int* Time::getSeconds()
{
	int *t = new int;
	*t = *seconds;
	return t;
}
bool Time::operator==(const Time &p)
{
	bool chk ;
	if (*hours == *p.hours&& *minutes == *p.minutes&&*seconds == *p.seconds)
		chk = 1;
	else
		chk = 0;
	return chk;
}
bool Time::operator>(const Time &p)
{
	bool chk;
	if (*hours > *p.hours)
	{
		chk = 1;
	}
	else if (*hours == *p.hours)
	{
		if (*minutes > *p.minutes)
		{
			chk = 1;
		}
		else if (*minutes == *p.minutes)
		{
			if (*seconds > *p.seconds)
				chk = 1;
			else if (*seconds == *p.seconds)
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
 ostream&  operator << (ostream& os, const Time&p)
{
	 os << *p.hours << " : " << *p.minutes << " : " << *p.seconds << endl;
	 return os;
}
 istream& operator>>(istream&is, Time&p)
 {
 	 int x, y, z;
	 
	 cout << "Enter the time : (xx xx xx)";
	 is >> *p.hours >> *p.minutes >> *p.seconds;
	 x = *p.hours;
	 y = *p.minutes;
	 z = *p.seconds;
	
	 while ( (x < 1 || x > 12) || (y < 0 || y > 59) || (z < 0 || z > 59))
	 {
		 cout << "Invalid Input !!!\nEnter Again : ";
		 is >> *p.hours >> *p.minutes >> *p.seconds;
		 x = *p.hours;
		 y = *p.minutes;
		 z = *p.seconds;
	 }
	 
	 return is;
 }
 Time Time:: operator+(const Time &p)
 {
	 int divm, divs;
	 Time t;
	 *t.hours = *hours + *p.hours;
	 *t.minutes = *minutes + *p.minutes;
	 *t.seconds = *seconds + *p.seconds;
	 if (*t.seconds > 12)
	 {
		 divs = *t.seconds / 60;
		 *t.seconds = *t.seconds % 60;
		 *t.minutes += divs;
	 }
	 if (*t.minutes > 12)
	 {
		 divm = *t.minutes / 60;
		 *t.minutes = *t.minutes % 60;
		 *t.hours += divm;
	 }
	 if (*t.hours > 12)
	 {
		 *t.hours = *t.hours % 12;
	 }
	 
	 return t;
 }
 Time Time:: operator-(const Time &p)
 {
	 bool chks = 0, chkm = 0;
	 Time t;
	 *t.hours = *hours - *p.hours;
	 *t.minutes = *minutes - *p.minutes;
	 *t.seconds = *seconds - *p.seconds;
	 if (*t.seconds < 0)
	 {
		 *t.seconds = *t.seconds * -1;
		 *t.seconds = 60 - *t.seconds;
		 chks = 1;
	 }
	 if (*t.minutes < 0)
	 {
		 *t.minutes = *t.minutes * -1;
		 *t.minutes = 60 - *t.minutes;
		 chkm = 1;
	 }
	 if (*t.hours < 0)
	 {
		 *t.hours = *t.hours * -1;
		 *t.hours = 12 - *t.hours;
	 }
	 if (chks == 1)
	 {
		 *t.minutes= *t.minutes-1;
		 if (*t.minutes < 0)
		 {
			 *t.minutes = 59;
		 }
	 }
	 if (chkm == 1)
	 {
		 *t.hours = *t.hours - 1;
		 if (*t.hours < 0)
		 {
			 *t.hours = 12;
		 }
	 }
	 
	 return t;
 }
 Time Time :: operator++()
 {
	 *seconds = *seconds + 1;
	 return *this;
 }
 Time Time :: operator--()
 {
	 *seconds = *seconds - 1;
	 return *this;
 }
 Time Time:: operator++(int)
 {
	 Time t=*this;

	 *seconds = *seconds + 1;
	 return t;
 }
 Time Time:: operator--(int)
 {
	 Time t = *this;

	 *seconds = *seconds - 1;
	 return t;
 }
 

