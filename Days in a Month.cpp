#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

void main(){
	int days;
	int month;
	cout << "Please enter the desired month:";
	cin >> month;
	int year;
	cout << "Please enter the desired year:";
	cin >> year;

	if(month == 4 || month == 6 || month == 9 || month == 11)
		days = 30;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		days = 31;
	
	if(month == 2){
		if((year % 100) == 0){
			if ((year % 400) == 0)
				days = 29;
			else days = 28;
		}
		else 
			if((year % 4) == 0)
				days = 29;
			else days = 28;
	}

	cout << "Days=" << days << endl;
}