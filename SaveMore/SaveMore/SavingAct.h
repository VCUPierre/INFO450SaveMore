#pragma once
#include "BankAccount.h"

class SavingAct : public BankAccount {
private:
	int vIntrestRate;
public:
	SavingAct();
	SavingAct(double aBal);
	double Withdraw(double aBal, double amt);
	double AssessIntrest(double vRate, double aBal);
	void Display();
	void CalculateIR(int aBal/*, int vIRate*/); //returns intrestRate
};