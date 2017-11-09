#include "stdafx.h"
#include "CheckingAct.h"
#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

CheckingAct::CheckingAct() {
	//default construct
}
CheckingAct::CheckingAct(double aBal, int checks) : BankAccount(aBal) 
{

}
double CheckingAct::BalChecker(int aBal)
{
	return aBal;
}
int CheckingAct::GetChecks(int checks) 
{
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
	cout << "Total Balance: " << actBal << endl;
	cout << "Total books of Checks: "<< onHandChecks << endl;
}
/*CheckingAct::CheckingAct(string t, string a, double c, string i, int m) : Publication(t, a, c, i) {
	minutes = m;
}
void CheckingAct::Display() {
	cout << "Title: " << title << " Author: " << author << " cost: " << cost << endl;
	cout << "ISBN: " << ISBN << " minutes: " << minutes << endl;
}
void CheckingAct::GetData() {
	cout << "Please enter Book:" << endl;
	getline(cin, title);
	cout << "Please enter Author:" << endl;
	getline(cin, author);
	cout << "Please enter ISBN:" << endl;
	getline(cin, ISBN);
	cout << "Please enter price" << endl;
	/*getline(cin, cost);
	cout << "Please enter number of minutes:" << endl;
	cin >> minutes;
}
ostream& operator<<(ostream &out, Audio &a) {
	out << "Title is " << a.title << endl;
	out << "Author is " << a.author << endl;
	out << "ISBN is " << a.ISBN << endl;
	return out;
}*/