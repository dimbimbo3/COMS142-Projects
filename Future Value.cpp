#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double futureValue(double, double,int);

void main(){
	double present, rate;
	int months;

	cout << "Please enter present value of account:";
	cin >> present;

	cout << "Please enter monthly interest rate:";
	cin >> rate;

	cout << "Please enter the number of months:";
	cin >> months;

	cout << setprecision(2) << fixed;
	cout << "Future Value = $" << futureValue(present,rate,months) << endl;
}

double futureValue(double p, double i, int t){
	return p * pow(1 + i,t);
}