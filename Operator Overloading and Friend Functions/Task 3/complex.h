#include <iostream>
using namespace std;


class complex
{
	int real;
	int imag;
public:
	//All functions that are needed.

	complex();
	complex(int,int);
	complex(int);
    complex(const complex&);
	complex& operator +(const complex&);
	complex& operator -(const complex&);
	complex& operator *(const complex&);
	complex& operator /(const complex&);
	void display();
};
