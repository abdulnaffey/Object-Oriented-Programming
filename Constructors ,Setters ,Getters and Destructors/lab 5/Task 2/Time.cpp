#include "Time.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}
Time::Time(int h,int m,int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}
Time::Time(const Time& obj)
{
	hours = obj.hours;
	minutes = obj.minutes;
	seconds = obj.seconds;
}
void Time::tick()
{
	if (seconds == 59)
	{
		seconds =0;
		if (minutes == 59)
		{
			minutes = 0;
			if (hours == 23)
			{
				hours = 0;
			}
			else
			{
				hours++;
			}
		}
		else
		{
			minutes++;
		}
	}
	else
	{
		seconds++;
	}
}
void Time::setTime(int h, int m,int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}
void Time::showTime(){
	if (hours > 12)
	{
		if (hours < 10)
		{
			if (minutes < 10)
			{
				if (seconds < 10)
				{
					cout <<"0"<< hours % 12 << ":0" << minutes << ":0" << seconds << " PM ";
				}
				else
				{
					cout << "0" << hours % 12 << ":0" << minutes << ":" << seconds << " PM ";
				}
			}
			else
			{
				if (seconds < 10)
				{
					cout << "0" << hours % 12 << ":" << minutes << ":0" << seconds << " PM ";
				}
				else
				{
					cout << "0" << hours % 12 << ":" << minutes << ":" << seconds << " PM ";
				}
			}

		}
		else
		{
			if (minutes < 10)
			{
				if (seconds < 10)
				{
					cout  << hours % 12 << ":0" << minutes << ":0" << seconds << " PM ";
				}
				else
				{
					cout << hours % 12 << ":0" << minutes << ":" << seconds << " PM ";
				}
			}
			else
			{
				if (seconds < 10)
				{
					cout  << hours % 12 << ":" << minutes << ":0" << seconds << " PM ";
				}
				else
				{
					cout << hours % 12 << ":" << minutes << ":" << seconds << " PM ";
				}
			}
		}
	}
	else
	{
		if (hours < 10)
		{
			if (minutes < 10)
			{
				if (seconds < 10)
				{
					cout << "0" << hours % 12 << ":0" << minutes << ":0" << seconds << " AM ";
				}
				else
				{
					cout << "0" << hours % 12 << ":0" << minutes << ":" << seconds << " AM ";
				}
			}
			else
			{
				if (seconds < 10)
				{
					cout << "0" << hours % 12 << ":" << minutes << ":0" << seconds << " AM ";
				}
				else
				{
					cout << "0" << hours % 12 << ":" << minutes << ":" << seconds << " AM ";
				}
			}

		}
		else
		{
			if (minutes < 10)
			{
				if (seconds < 10)
				{
					cout << hours % 12 << ":0" << minutes << ":0" << seconds << " AM ";
				}
				else
				{
					cout << hours % 12 << ":0" << minutes << ":" << seconds << " AM ";
				}
			}
			else
			{
				if (seconds < 10)
				{
					cout << hours % 12 << ":" << minutes << ":0" << seconds << " AM ";
				}
				else
				{
					cout << hours % 12 << ":" << minutes << ":" << seconds << " AM ";
				}
			}
		}
	}
}
int Time::getTime()
{
	int time;
	time = (hours * 3600) + (minutes * 60) + seconds;
	return time;
}

