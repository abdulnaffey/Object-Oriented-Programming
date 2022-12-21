#include "MyNum.h"

MyNum::MyNum(int x)
{
	num = x;
}
void MyNum::setnum(int x)
{
	num = x;
}
int MyNum::getnum()
{
	return num;
}
void MyNum::positive()
{
	if (num < 0)
		num = -1 * num;
}
void MyNum::negative()
{
	if (num > -1)
		num = num * -1;
}
MyNum::MyNum()
{
	num = 0;
}


