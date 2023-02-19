#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	int getDay();
	int getMonth();
	int getYear();
	bool operator==(const Date &);
	bool operator>(const Date &);
	friend ostream& operator << (ostream&, const Date&);
	friend istream& operator >> (istream&, Date&);
	Date operator+ (int );
	Date operator-(int );
	Date operator++();
	Date operator++(int);
	Date operator--();
	Date operator--(int);
};