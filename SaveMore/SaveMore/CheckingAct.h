#pragma once
#include "BankAccount.h"

class CheckingAct : public BankAccount {
private:
	int onHandChecks;
public:
	CheckingAct();
	CheckingAct(double aBal);
	double Withdraw(double aBal, double amt);
	double BalChecker(int aBal);
	int GetChecks(int checks);
	void Display();
	//friend ostream& operator<<(ostream &out, Audio &a);
};