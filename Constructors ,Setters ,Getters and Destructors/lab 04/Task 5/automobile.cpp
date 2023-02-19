#include"automobile.h"

void automobile::sets(string x) {
	serial = x;
}
void automobile::sety(int x) {
	year_of_manufacture = x;
}
void automobile::setq(int x) {
	quantity = x;
}
void automobile::setm(char* x) {
	int i = 0;
	while (x[i] != '\0') {
		material[i] = x[i];
		i++;
	}
	material[i] = '\0';
}
string automobile::gets() {
	return serial ;
}
int  automobile::gety() {
	return year_of_manufacture ;
}
int  automobile::getq() {
	return quantity ;
}
char* automobile::getm() {
	return material;
}