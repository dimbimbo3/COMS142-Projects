#include <iostream>
#include <iomanip>
using namespace std;

void main(){
	int days;
	int count = 1;
	double pennies;
	double total = 0;

	do{
		cout << "Please enter the number of days:";
		cin >> days;

		if(days >= 1){
			for(pennies = .01; count <= days; pennies *= 2){
			total += pennies;
			cout << setprecision(2) << fixed;
			cout << "Day #" << setw(3) << count << " Pay $" << setw(10) << pennies << " Culmulative Pay $" << setw(10) << total << endl;
			count++;
			}
		}

		else
			cout << "Please enter a valid number of days..." << endl;
	}while(days < 1);
}