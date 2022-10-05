#include <iostream>
#include <string>
using namespace std;

void main(){
	string movie_name;
	int adult_amount;
	int child_amount;
	double adult_price = 10.00;
	double child_price = 6.00;

	cout << "Please enter movie name: ";
	cin >> movie_name;

	cout << "Please enter adult tickets sold: ";
	cin >> adult_amount;

	cout << "Please enter child tickets sold: ";
	cin >> child_amount;

	cout << "Movie Name:\t\"" << movie_name << "\"" << endl;
	cout << "Adult Tickets Sold:\t" << adult_amount << endl;
	cout << "Child Tickets Sold:\t" << child_amount << endl;

	double gross = adult_amount * adult_price + child_amount * child_price;

	cout << "Gross Box Officie Profit:\t$" << gross << endl;

	double net = gross * .20;

	cout << "Net Box Office Profit:\t$" << net << endl;

	double paid = gross - net;

	cout << "Amount Paid to Distributor:\t$" << paid << endl;
}