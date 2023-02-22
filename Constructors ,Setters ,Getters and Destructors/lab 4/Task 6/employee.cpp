#include"employee.h"
void employee::init(int code, int joinAge, int karantAge) {
	employeeCode = code;
	ageAtJoining = joinAge;
	currentAge = karantAge;
}
void employee::display()
{
	if (tenure > 1) {
		cout << "Employee code : " << employeeCode << "\nAge at joining : " << ageAtJoining << "\nCurrent Age : " << currentAge<<"\n";
		cout << "==========================="
	}
}
void employee::calculateTenure()
{
	tenure = currentAge - ageAtJoining;
}