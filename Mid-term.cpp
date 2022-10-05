#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main(){
	double commission;
	int sales;
	double rate;
	int years;
	string name;

	cout << "Please enter the employees name:";
	getline(cin, name);

	cout << "Please enter the monthly sales volume:";
	cin >> sales;

	cout << "Please enter the employees years of service:";
	cin >> years;

	if(years < 10){
		if(sales < 50000){
			rate = .02;
			if(name == "Bob Freeloader" || name == "bob freeloader" ||  name == "Bob freeloader" || name == "bob Freeloader")
				rate = .03;
		}//nested if

		else if(sales >= 50000){
			rate = .04;
			if(name == "Bob Freeloader" || name == "bob freeloader" ||  name == "Bob freeloader" || name == "bob Freeloader")
				rate = .06;
		}//nested else if 

	}//if

	else if(years >= 10){
		if(sales < 50000){
			rate = .08;
			if(name == "Bob Freeloader" || name == "bob freeloader" ||  name == "Bob freeloader" || name == "bob Freeloader")
				rate = .12;
		}//nested if

		else if(sales >= 50000){
			rate = .12;
			if(name == "Bob Freeloader" || name == "bob freeloader" ||  name == "Bob freeloader" || name == "bob Freeloader")
				rate = .18;
		}//nested else if 

	}//else if

	commission = rate * sales;

	cout << setprecision(2) << fixed;

	cout << endl;
	cout << left << setw(17) << "Employee:" << right << name << endl;
	cout << left << setw(17) << "Sales Volume:" << right << sales << endl;
	cout << left << setw(17) << "Service Years:" << right << years << endl;
	cout << left << setw(17) << "Commission Rate:" << right << rate << endl;
	cout << left << setw(17) << "Commission:" << right << commission << endl;

	//set constants
	//bob freeloader & (years & sale limits) max/min 
}