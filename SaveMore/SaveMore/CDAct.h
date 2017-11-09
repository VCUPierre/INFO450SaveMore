#pragma once
#include "BankAccount.h"

class CDAct : public BankAccount {
private:
	int term;
	int yrCreation;
	double iRate;
public:
	CDAct();
	CDAct(double aBal,double iRate);
	double Withdraw(double aBal, double amt);
	void Display();
	double AssesIntrest(int t, double aBal);
	int CalTerm(int yC,int t);
};