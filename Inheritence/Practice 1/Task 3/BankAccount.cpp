#include "BankAccount.h"

void   BankAccount::deposit(double x)
{
	balance += x;
} 

void   BankAccount::withdraw(double x)
{
	balance -= x;
}

BankAccount::BankAccount()
{
	balance = 0.0;
	title = nullptr;
	accountNumber = nullptr;
}

void  BankAccount::display(void)
{
	cout << "Title : " << title << endl;
	cout << "Account Number : " << accountNumber << endl;
	cout << "Balance : " << balance << endl;
}

BankAccount::~BankAccount()
{
	if (title != nullptr)
	{
		delete[] title;
		delete[] accountNumber;
		title = nullptr;
		accountNumber = nullptr;
	}
	
}

BankAccount::BankAccount(const char* x, const char* y, double z)
{
	int l = 0;
	for (l = 0; x[l] != '\0'; l++);
	title = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		title[i] = x[i];
	}
	title[l] = '\0';
	cout << title << endl;
	
	for (l = 0; y[l] != '\0'; l++);
	accountNumber = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		accountNumber[i] = y[i];
	}
	accountNumber[l] = '\0';
	balance = z;
}

double BankAccount::getBalance(void)
{
	return balance ;
}

void BankAccount::setBalance(double x)
{
	 balance=x;
}

void   SavingAccount::calculateInterest()
{
	double x;
	x = getBalance() * interest;
	x /= 100;
	
	cout << "Interest on current balance will be : " << x << endl;
}

void   SavingAccount::setInterest(double x)
{
	interest = x;
	calculateInterest();
}

SavingAccount::SavingAccount( const char* t, const char* a, double b,double x ):BankAccount(t,a,b)
{
	interest = x;
	calculateInterest();
}

CheckingAccount::CheckingAccount(double x, const char* t, const char* a, double b):BankAccount(t,a,b)
{
	feeChargedPerTransaction = x;
}

void CheckingAccount::setFeeChargedPerTransaction(double x)
{
	feeChargedPerTransaction = x;
}

void CheckingAccount::deposit(double x)
{
	double y = getBalance();
	y += x;
	y -= feeChargedPerTransaction;
	setBalance(y);
}

void CheckingAccount::withdraw(double x)
{
	double y = getBalance();
	y -= x;
	y -= feeChargedPerTransaction;
	setBalance(y);
}