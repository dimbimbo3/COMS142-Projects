#include <iostream>
using namespace std;

void main(){
	double stocks = 750 * 35.00;
	const double COMMISSION_RATE = .02;
	double commission = stocks * COMMISSION_RATE;
	double total = stocks + commission;

	cout << "Stocks= $" << stocks << endl;
	cout << "Commision= $" << commission << endl;
	cout << "Total= $" << total << endl;
}