#include "ComputerSystem.h"
int main()
{
	ComputerSystem p;
	p.c.setCompanyName("Dell");
	p.c.setPrice(52);
	p.c.setSpeed(6963);
	p.m.setCompanyName("HP");
	p.m.setPrice(25);
	p.m.setSize(360);
	p.k.setCompanyName("Fujitsu");
	p.k.setNumOfKeys(5);
	p.k.setPrice(53.36);
	p.display();
}