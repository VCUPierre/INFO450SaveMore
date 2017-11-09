#include "stdafx.h"
#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;
int BankAccount::numGenerator;

BankAccount::BankAccount() {
	//default constructor
}
BankAccount::BankAccount(double aBal) {
	int actNum = BankAccount::numGenerator;
	double actBal = aBal;
	BankAccount::numGenerator++;
	GetLocalTime(&OpenDate);
}
double BankAccount::Withdraw(double aBal, double amt)
{
	//VIRTUAL FUNCTION
	return aBal;
}
double BankAccount::Deposit(double &aBal, double amt)
{
	cout << "Deposit amount: "<< amt << endl;
	aBal += amt;
	cout << "New Total Balance: "<< aBal << endl;
	return aBal;
}
void BankAccount::Display()
{
	//VIRTUAL FUNCTION
}

