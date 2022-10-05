#include <iostream>
#include <cmath>
using namespace std;

void main(){
	double balance; //principle
	double interest_rate;
	double compounded;
	double years;

	cout << "Please enter your bank balance: ";
	cin >> balance;

	cout << "Please enter your interest rate: ";
	cin >> interest_rate;

	cout << "Please enter the number of times the interest is compounded: ";
	cin >> compounded;

	cout << "Please enter length(in years): ";
	cin >> years;

	double expvalue = pow(1 + interest_rate / compounded, compounded * years);
	double savings = balance * expvalue;

	double interest = savings - balance;

	cout << "Interest Rate:\t" << interest_rate << endl;
	cout << "Times Compounded:\t" << compounded << endl;
    cout << "Principle:\t$" << balance << endl;
	cout << "Interest:\t$" << interest << endl;
	cout << "Amount in Savings:\t$" << savings << endl;
}