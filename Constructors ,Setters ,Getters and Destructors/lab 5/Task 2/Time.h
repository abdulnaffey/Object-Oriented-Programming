#include <iostream>
using namespace std;
class Time{
private :
	int hours;
	int minutes;
	int seconds;
public:
	Time();
	Time(int, int, int);
	Time(const Time&);
	void setTime(int, int, int);
	void showTime(void);
	void tick(void);
	int getTime();
};