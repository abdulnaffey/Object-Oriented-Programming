#include <iostream>
using namespace std;

class     Calculator
{
	float num1, num2;
public:
	      Calculator();
	      Calculator(float, float);
	void  setNum1(float);
	void  setNum2(float);
	float getNum1(void);
	float getNum2(void);
	void  add(void);
	void  sub(void);
	void  multiply(void);
	void  divide(void); 
};
class     Scientific_Calculator : public Calculator
{
public:
	      Scientific_Calculator();
	      Scientific_Calculator(float x, float y);
	void  square(void);
	void  power(void);
};
