#include "dayType.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
dayType::dayType() {
	weekDays[0] = "Sunday";
	weekDays[1] = "Monday";
	weekDays[2] = "Tuesday";
	weekDays[3] = "Wednesday";
	weekDays[4] = "Thursday";
	weekDays[5] = "Friday";
	weekDays[6] = "Saturday";
	weekDays[7] = "Sunday";
	weekDays[8] = "Monday";
}
	void dayType::setday(string ok)
	{
		if (ok == "mon")
		{
			input = 1;
		}
		else if (ok == "tue"){
			input = 2;
		}
		else if (ok == "wed"){
			input = 3;
		}
		else if (ok == "thu"){
			input = 4;
		}
		else if (ok == "fri"){
			input = 5;
		}
		else if (ok == "sat"){
			input = 6;
		}
		else if (ok == "sun"){
			input = 7;
		}
	}
	string dayType::getday(){

		switch (input){

		case 1:
			return weekDays[1];
			break;
		case 2:
			return weekDays[2];
			break;
		case 3:
			return weekDays[3];
			break;
		case 4:
			return weekDays[4];
			break;
		case 5:
			return weekDays[5];
			break;
		case 6:
			return weekDays[6];
			break;
		case 7:
			return weekDays[7];
			break;
		}
	}
	string dayType::nextDay(){

		return weekDays[input + 1];
	}
	string dayType::previousDay(){

		return weekDays[input - 1];
	}
	string dayType:: calculateDay (int ok){

		return weekDays[input +( ok % 7) ];
	}
