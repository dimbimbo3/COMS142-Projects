#include <iostream>
using namespace std;

void main(){
	double bill;
	double billB;
	double billC;
	int minutes;
	int additional_minutes = 0;
	int additional_minutesB = 0;
	char package_selection;

	int x = 0;

	do{
		cout << "Please enter the purchased package..." << endl;
		cout << "Type 'A' for Package A" << endl;
		cout << "Type 'B' for Package B" << endl;
		cout << "Type 'C' for Package C" << endl;
		cin >> package_selection;

		switch(package_selection){
		case 'A':
		case 'a':
			cout << "Please enter the number of minutes used:";
			cin >> minutes;

			if (minutes > 450){
				additional_minutes = minutes - 450;
				if (minutes > 900)
					additional_minutesB = minutes - 900;
			}

			bill = 39.99 + (0.45 * additional_minutes);
			billB = 59.99 + (0.40 * additional_minutesB);
			billC = 69.99;
			
			if (bill > billB && bill > billC){
				cout << "You would save $" << bill - billB << " if you switched to Package B" << endl;
				cout << "You would save $" << bill - billC << " if you switched to Package C" << endl;
			}
			else if(bill > billB)
				cout << "You would save $" << bill - billB << " if you switched to Package B" << endl;

			x++;
			break;

		case 'B':
		case 'b':
			cout << "Please enter the number of minutes used:";
			cin >> minutes;

			if (minutes > 900)
				additional_minutes = minutes - 900;

			bill = 59.99 + (0.40 * additional_minutes);
			billC = 69.99;

			if(bill > billC)
				cout << "You would save $" << bill - billC << " if you switched to Package C" << endl;

			x++;
			break;

		case 'C':
		case 'c':
			cout << "Please enter the number of minutes used:";
			cin >> minutes;
			bill = 69.99;

			x++;
			break;

		default:
			cout << "Please enter a valid package number..." << endl;
			cout << endl;
		}
	}while(x == 0);

	cout << "Your total amount due: $" << bill << endl;
}