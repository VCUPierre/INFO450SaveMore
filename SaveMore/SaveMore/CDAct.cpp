#include "stdafx.h"
#include "CDAct.h"
#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

CDAct::CDAct() 
{
	//defualt Constructor
}
CDAct::CDAct(double aBal, double iRate) : BankAccount(aBal) {
	actBal = aBal;
	yrCreation = BankAccount::OpenDate.wYear;
	iRate = iRate;
}
void CDAct::Display() {
	cout << "*** Account Number: " << actNum << " ***" << endl;
	cout << "Date opened: "<<OpenDate.wMonth<<"/"<<OpenDate.wDay<<"/"<<OpenDate.wYear << endl;
	cout << "Total Balance: " << actBal << endl;
	cout << "Current term: "<< term << endl;
	cout << "Current Intrest Rate: "<< iRate << endl;
}
double CDAct::AssesIntrest(int t, double aBal) 
{
	int months = 12;
	double Fvalue = 0.0;

	Fvalue = (aBal * pow((1 + iRate / months), (months*t)));

	cout << "***Account number: " << actNum << endl;
	cout << "Starting Balance: " << aBal << endl;
	cout << "Future Balance: " << Fvalue << endl;

	aBal = Fvalue;

	return aBal;
}
	
double CDAct::Withdraw(double aBal, double amt) {
	double Fee = .10;
	if (yrCreation < term)
	{
		cout << "Withdrawal amount (" << amt << ") and a Fee of $" << (aBal*Fee) << " will be deducted from Account: " << actNum << endl;
		aBal -= (amt + (aBal*Fee));
		cout << "***Account: " << actNum << " New Balance: " << aBal << endl;
		return aBal;
	}
	else {
		cout << "Withdrawal amount (" << amt << ") will be deducted from Account: " << actNum << endl;
		aBal -= (amt + Fee);
		cout << "***Account: " << actNum << " New Balance: " << aBal << endl;
		return aBal;
	}
}
int CDAct::CalTerm(int yC, int t) 
{
	t = yrCreation;
	return t;
}
