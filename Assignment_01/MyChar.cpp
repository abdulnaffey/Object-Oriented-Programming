#include "MyChar.h"

MyChar::MyChar(char x)
{
	num = x;
}
void MyChar::setchar(char x)
{
	num = x;
}
char MyChar::getchar()
{
	return num;
}
void MyChar::upperCase()
{
	if (num < 123 && num>96)
		num = num-32;
}
void MyChar::lowerCase()
{
	if (num < 91 && num>64)
		num = num + 32;
}
MyChar::MyChar()
{
	num = '\0';
}


