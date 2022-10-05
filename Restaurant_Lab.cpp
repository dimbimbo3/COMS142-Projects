#include <iostream>
using namespace std;

void main(){
	float bill = 88.67f;
	float tax = bill * .0675f;
	float tip = (bill + tax) * .20;
	float total = bill + tax + tip;

	cout << "Bill=\t" << bill << endl;
	cout << "Tax=\t" << tax << endl;
	cout << "Tip=\t" << tip << endl;
	cout << "Total=\t" << total << endl;
}