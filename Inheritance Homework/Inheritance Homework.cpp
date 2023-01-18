#include <iostream>
using namespace std;
class Account
{
protected:
	int accountNumber;
	string accountName;
	double accountBalance;
public:
	int GetaccountNumber()
	{
		return accountNumber;
	}
	void SetaccountNumber(int acc)
	{
		accountNumber = acc;
	}
	string GetaccountName()
	{
		return accountName;
	}
	void SetaccountName(string acc)
	{
		accountName = acc;
	}
	double GetaccountBalance()
	{
		return accountBalance;
	}
	void SetaccountBalance(double acc)
	{
		accountBalance = acc;
	}
	void deposit(double amount)
	{
		accountBalance = accountBalance + amount;
	}
	void withdraw(double amount)
	{
		if (amount <= accountBalance)
			accountBalance = accountBalance - amount;
		else
			cout << "Error amount greater than account Balance";
	}
	void displayAccountInfo()
	{
		cout << "accountNumber: " << accountNumber << endl;
		cout << "accountName: " << accountName << endl;
		cout << "accountBalance: " << accountBalance << endl;
	}
};
class SavingsAccount :public Account
{
	double interestRate;
public:
	double calculateInterest()
	{
		return accountBalance * interestRate;
	}
	double GetinterestRate()
	{
		return interestRate;
	}
	void SetinterestRate(double inter)
	{
		interestRate = inter;
	}
};
int main()
{
	SavingsAccount t1;
	t1.SetaccountNumber(123);
	t1.SetaccountName("abdulraman ");
	t1.SetaccountBalance(50000);
	t1.displayAccountInfo();
	t1.deposit(2000);
	cout << "account Balance after deposit 2000 : " << endl;
	t1.displayAccountInfo();
	t1.withdraw(5000);
	cout << "account Balance after withdraw 5000 : " << endl;
	t1.displayAccountInfo();
	t1.SetinterestRate(0.12);
	cout << "calculate Interest: " << t1.calculateInterest();
	return 0;
}