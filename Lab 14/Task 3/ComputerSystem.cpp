#include "ComputerSystem.h"	
ComputerSystem::ComputerSystem()
{

}
ComputerSystem::~ComputerSystem()
{

}
void ComputerSystem::display()
{
	cout << "Monitor : "; m.display();
	cout << "Keyboard : " ; k.display();
	cout << "CPU : "; c.display();
}