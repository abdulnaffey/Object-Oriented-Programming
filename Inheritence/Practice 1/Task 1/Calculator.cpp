#include "Calculator.h"

      Calculator::Calculator()
{
	num1 = 0;
	num2 = 0;
}
      Calculator::Calculator(float x,float y)
{
	num1 = x;
	num2 = y;
}
void  Calculator::setNum1(float x)
{
	num1 = x;
}
void  Calculator::setNum2(float x)
{
	num2 = x;
}
float Calculator::getNum1(void)
{
	return num1;
}
float Calculator::getNum2(void)
{
	return num2;
}
void  Calculator::add()
{
	cout << num1 + num2 << endl;
}
void  Calculator::sub()
{
	cout << num1 - num2 << endl;
}
void  Calculator::multiply()
{
	cout << num1 * num2 << endl;
}
void  Calculator::divide()
{
	if (num2 == 0)
	{
		cout << "Number can't be divide by 0\n";
		cout << 0 << endl;
	}
 	else
	  cout << num1 / num2 << endl;
}

      Scientific_Calculator::Scientific_Calculator() :Calculator() {}
      Scientific_Calculator::Scientific_Calculator(float x,float y) :Calculator(x,y){}
void  Scientific_Calculator::power()
{
	if (getNum2() == 0)
		cout << 1 << endl;
	else if (getNum2() == 1)
		cout << getNum1() << endl;
	else 
	{
		float x = getNum1();
		for (int i = 0; i < getNum2(); i++)
		{
			x *= x;
		}
		cout << x << endl;
	}
}
void  Scientific_Calculator::square()
{
	cout << getNum1() * getNum1() << endl;
}

