#include "stdafx.h"
#include "SavingAct.h"
#include "BankAccount.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

SavingAct::SavingAct() {}
SavingAct::SavingAct(double aBal) : BankAccount( aBal) {
	actBal = aBal;
}
void SavingAct::Display() {
	cout << "*** Account Number: "<< actNum <<" ***" << endl;
	cout << "Date opened: " << OpenDate.wMonth << "/" << OpenDate.wDay << "/" << OpenDate.wYear << endl;
	cout << "Total Balance: "<< actBal << endl;
	cout << "Current Intrest Rate: "<<vIntrestRate << endl;
}
double SavingAct::Withdraw(double aBal, double amt) {
	double Fee = 2.00;
	cout << "Withdrawal amount ("<<amt<<") and a Fee of $" << Fee << " will be deducted from Account: "<<actNum << endl;
	aBal -= (amt+Fee);
	cout << "***Account: "<<actNum<<" New Balance: "<< aBal << endl;
	return aBal;
}
double SavingAct::AssessIntrest(double vRate, double aBal){
	int months = 12;
	int term = 0;
	double Fvalue = 0.0;
	
	cout << "How many terms?" << endl;
	cin >> term;
	cin.ignore();
	cin.clear();

	Fvalue = (aBal * pow((1 + vRate / months),(months*term)));

	cout << "***Account number: "<<actNum<< endl;
	cout << "Starting Balance: "<< aBal << endl;
	cout << "Future Balance: " << Fvalue << endl;

	aBal = Fvalue;

	return aBal;
}
void SavingAct::CalculateIR(int aBal){
	if (aBal >= 10000)
	{
		vIntrestRate = .02;
	}
	else {
		vIntrestRate = .01;
	}
}
