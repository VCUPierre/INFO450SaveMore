#include "stdafx.h"
#include "SavingAct.h"
#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

SavingAct::SavingAct(double aBal) : BankAccount( aBal) {
	actBal = aBal;
}
void SavingAct::Display() {
	cout << "*** Account Number: "<< actNum <<" ***" << endl;
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
	return aBal;
}
void SavingAct::CalculateIR(int aBal/*, int vIRate*/){
	if (aBal >= 10000)
	{
		vIntrestRate = .02;
	}
	else {
		vIntrestRate = .01;
	}

	//return vIRate;
}

/*SavingAct();
	SavingAct(int aNum, double aBal);
	int Withdraw(int aBal);
	double AssessIntrest();
	void Display();
	double CalculateIR(int aBal, int vIRate);
*/