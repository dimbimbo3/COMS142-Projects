#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

void main(){
	double balance;
	int checks;
	int months;
	double fee;
	int x = 0;

	cout << "Please input your starting balance:";
	cin >> balance;

	if(balance >= 0){
		do{
			cout << "Please input your number of checks written:";
		    cin >> checks;
			if(checks >= 0 && checks < 20){
				x++;
				fee = .10 * checks;}
			else if(checks >= 20 && checks <= 39){
				x++;
				fee = .08 * checks;}
			else if(checks >= 40 && checks <= 59){
				x++;
				fee = .06 * checks;}
			else if(checks >= 60){
				x++;
				fee = .04 * checks;}
			else if(checks < 0)
				cout << "Please enter a valid number..." << endl;
		}while(x == 0);

		cout << "Please input the number of months your account has been open:";
		cin >> months;

		fee += months * 10;

		if(balance < 400)
			fee += 15;

		balance -= fee;

		cout << "After fees, your balance = $" << balance << endl;
	}
	else if(balance < 0)
		cout << "WARNING YOUR ACCOUNT IS OVERDRAWN!" << endl;
}