#pragma once
#include <string>
#include <Windows.h>

using namespace std;

class BankAccount {
protected:
	static int numGenerator;
	int actNum;
	double actBal;
	SYSTEMTIME OpenDate;
public:
	BankAccount();
	BankAccount(double aBal);
	virtual double Withdraw(double aBal, double amt);
	double Deposit(double &aBal, double amt);
	virtual void Display();
};