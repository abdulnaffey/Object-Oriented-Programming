#include "BankAccount.h"

int main()
{
	SavingAccount s( "Saving", "5621457", 100,6);
	
	s.display();
	s.setInterest(5);

	s.display();

	CheckingAccount c(5, "Checking", "54712589", 550);
	c.deposit(50);
	c.display();
}