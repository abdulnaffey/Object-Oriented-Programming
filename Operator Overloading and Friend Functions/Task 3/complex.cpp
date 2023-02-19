#include "complex.h"

complex::complex()
{
	real = 0;
	imag = 0;
}
complex::complex(int x,int y)
{
	real = x;
	imag = y;
}
complex::complex(int x) 
{
	real = x;
	imag = 0;
}
complex::complex(const complex& p)
{
	real = p.real;
	imag = p.real;
}
complex& complex::operator+(const complex& p)
{
	complex temp;
	temp.real = real + p.real;
	temp.imag = imag + p.imag;
	return temp;
}
complex& complex::operator-(const complex& p)
{
	complex temp;
	temp.real = real - p.real;
	temp.imag = imag - p.imag;
	return temp;
}
complex& complex::operator*(const complex& p)
{
	complex temp;
	temp.real = (real * p.real) + (-1 * (imag * p.imag));
	temp.imag = (real * p.imag) + (imag * p.real);
	return temp;
}
complex& complex::operator/(const complex& p)
{
	complex temp;
	temp.real = ((real * p.real) + (imag * p.imag)) / ((p.real * p.real) + (p.imag * p.imag));
	temp.imag = ((imag * p.real) - (real * p.imag)) / ((p.real * p.real) + (p.imag * p.imag));
	return temp;
}
void  complex::display()
{
	cout << real << " + (" << imag<<")i";
}