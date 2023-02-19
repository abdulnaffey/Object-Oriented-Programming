#include "card.h"

void card::setcn(int x) {
	card_number = x;
}
void card::setc(char* x) {
	int length = 0;
	while (x[length] == '\0') {
		color[length] = x[length];
			length++;
	}
	
	color[length] = '\0';
}
void card::setf(char* x) {
	int length = 0;
	while (x[length] == '\0') {
		face[length] = x[length];
		length++;
	}

	face[length] = '\0';
}

char* card::getc() {
	cout << &color << "\t";
	return color;
}
char* card::getf() {
	cout << &face<<"\t";
	return face;
}
int card::getcn() {
	return card_number;
}


