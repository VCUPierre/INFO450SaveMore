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
	yrCreation = BankAccount::dateCreated.wYear;
	iRate = iRate;
}
void CDAct::Display() {
	cout << "*** Account Number: " << actNum << " ***" << endl;
	cout << "Total Balance: " << actBal << endl;
	cout << "Current term: "<< term << endl;
	cout << "Current Intrest Rate: "<< iRate << endl;
}
double CDAct::AssesIntrest(int t, double aBal) 
{
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
	return t;
}
/*void CDAct::GetData() {
	cout << "Please enter Book:" << endl;
	getline(cin, title);
	cout << "Please enter Author:" << endl;
	getline(cin, author);
	cout << "Please enter ISBN:" << endl;
	getline(cin, ISBN);
	cout << "Please enter the price" << endl;
	getline(cin, cost);
	cout << "Please enter number of pages:" << endl;
	cin >> pages;
}*/
