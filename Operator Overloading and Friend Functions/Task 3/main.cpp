#include"complex.h"

int main()
{
	complex c1(3, 2);		// for complex numbers, such as 5+7i
	complex c2(3,4); 		// for numbers without imaginary part as 5 + 0i
	complex c3(8,-2);
	complex c4(1,7);
	complex c7(7);
	complex c8,c5,c6;
	c7 = c1 + c2;
	c8 = c1 - c2;
	 c5 = c1 * c4;
	 c6 = c3 / c2;  //Answer will be wrong as bounding from the Instruction to use INT. 
	cout << "C5 : "; c5.display();
	cout << "\nC6 : "; c6.display();
	cout << "\nC7 : "; c7.display();
	cout << "\nC8 : "; c8.display();
	return 0;
}
