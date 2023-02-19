#include <iostream>
using namespace std;

class BankAccount
{
	char*  title;
	char*  accountNumber;
	double balance;
public:
	       BankAccount();
		   ~BankAccount();
		   BankAccount(const char*, const char*,double);
	void   deposit(double);
	void   withdraw(double);
	double getBalance(void);
	void   setBalance(double);
	void   display(void);

};

class SavingAccount :public BankAccount
{
	double interest;
public:
	       SavingAccount( const char*, const char*, double,double  );
	void   setInterest(double);
	void   calculateInterest();
};
class CheckingAccount :public BankAccount
{
	double feeChargedPerTransaction;
public:
	       CheckingAccount(double, const char*, const char*, double);
	       
	void   setFeeChargedPerTransaction(double);
	void   deposit(double);
	void   withdraw(double);
};