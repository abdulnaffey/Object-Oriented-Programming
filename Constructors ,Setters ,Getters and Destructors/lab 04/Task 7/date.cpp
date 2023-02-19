#include "date.h"

void date::setdate(int x,int y,int z) {
	date = x;
	month = y;
	year = z;
	cmp = ((((date * 100) + month) * 10000) + year);
}
int date::getdate() {
//	cout << date << "/" << month << "/" << year;
	return cmp;
}
