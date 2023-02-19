#include <iostream>
using namespace std;

class dayType{

private:
	string weekDays[9];
	int input;
public:
			dayType();
	string  getday();
	void	setday(string);
	string	nextDay();
	string	previousDay();
	string	calculateDay( int );
};

