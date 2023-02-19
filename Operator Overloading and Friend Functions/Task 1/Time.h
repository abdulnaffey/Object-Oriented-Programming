#include <iostream>
using namespace std;

class Time
{
	int *hours;
	int *minutes;
	int *seconds;
public:
	Time();
	Time(const Time&);
	Time(int*, int*, int*);
	~Time();
	void operator=(const Time &);
	int* getHours();
	int* getMinutes();
	int* getSeconds();
	bool operator==(const Time &);
	bool operator>(const Time &);
	friend ostream& operator << (ostream&, const Time&);
	friend istream& operator >> (istream&, Time&);
	Time operator+(const Time &);
	Time operator-(const Time &);
	Time operator++();
	Time operator++(int);
	Time operator--();
	Time operator--(int);
};