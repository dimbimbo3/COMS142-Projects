#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main(){
	double shares_bought = 1000;
	double price_bought = 45.50;
	double paid = shares_bought * price_bought;
	double com1 = paid * .02;
	double shares_sold = 1000;
	double price_sold = 56.90;
	double sold = shares_sold * price_sold;
	double com2 = sold * .02;
	double profit = sold - com2 - com1 - paid;

	string val1 = "Price paid for stock:";
	string val2 = "Commission paid for purchase:";
	string val3 = "Amount sold for:";
	string val4 = "Commission paid when sold:";
	string val5 = "Profit made:";

	cout << setprecision(2) << fixed;
	cout << left << setw(30) << val1 << "$" << right << setw(9) << paid << endl;
	cout << left << setw(30) << val2 << "$" << right << setw(9) << com1 << endl;
	cout << left << setw(30) << val3 << "$" << right << setw(9) << sold << endl;
	cout << left << setw(30) << val4 << "$" << right << setw(9) << com2 << endl;
	cout << left << setw(30) << val5 << "$" << right << setw(9) << profit << endl;
}