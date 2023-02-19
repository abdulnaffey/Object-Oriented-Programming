#include<iostream>
#include"Monitor.h"
#include"CPU.h"
#include"Keyboard.h"
using namespace std;
class ComputerSystem
{
public:
	Keyboard k;
	Monitor m;
	CPU c;
	ComputerSystem();
	~ComputerSystem();
	void display();
};

