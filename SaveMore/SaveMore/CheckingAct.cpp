#include "stdafx.h"
#include "CheckingAct.h"
#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

CheckingAct::CheckingAct() {
	//default construct
}
CheckingAct::CheckingAct(double aBal) : BankAccount(aBal) 
{
	actBal = aBal;
	onHandChecks = 0;
}
double CheckingAct::BalChecker(int aBal)
{
	double Fee = 5.00;
	if (aBal < 500) 
	{
		cout << "****Account Number: "<<actNum<< endl;
		cout << "Balance ("<<aBal<<") fell below $500. A fee of $"<<Fee<< " will be added" << endl;
		aBal -= Fee;
	}

	return aBal;
}
int CheckingAct::GetChecks(int checks) 
{
	double checkFee = 15.00;
	int input;
	cout << "Number of checks?" << endl;
	cin >> input;
	cin.ignore();
	cin.clear();
	cout << "***Account Number: "<<actNum<< endl;
	cout << "Purchased ("<<input<<") checks, for $"<<checkFee<<" each."<< endl;
	checks = input;
	actBal -= (input*checkFee);
	cout << "New Account Balance: "<< actBal << endl;

	return checks;
}
double CheckingAct::Withdraw(double aBal, double amt) {
	cout << "Withdrawal amount (" << amt <<") will be deducted from Account: " << actNum << endl;
	aBal -= amt;
	cout << "***Account: " << actNum << " New Balance: " << aBal << endl;
	return aBal;
}
void CheckingAct::Display() 
{
	cout << "*** Account Number: " << actNum << " ***" << endl;
	cout << "Date opened: " << OpenDate.wMonth << "/" << OpenDate.wDay << "/" << OpenDate.wYear << endl;
	cout << "Total Balance: " << actBal << endl;
	cout << "Total books of Checks: "<< onHandChecks << endl;
}