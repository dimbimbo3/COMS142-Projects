#include <iostream>
using namespace std;

void main (){
	const int MONTHS = 12;
	double rainfall[MONTHS];
	double total = 0;
	double min = 0;
	double max = 0;
	int min_month = 0;
	int max_month = 0;
	int count = 0;

	cout << "Please enter rainfall(inches) for month #:" << count + 1 << ":";
	cin >> rainfall[count];
	min = rainfall[count];
	max = rainfall[count];
	min_month = count + 1;
	max_month = count + 1;
	total += rainfall[count];
	count++;

	for(; count < MONTHS; count++){
		cout << "Please enter rainfall(inches) for month #" << count + 1 << ":";
		cin >> rainfall[count];
		total += rainfall[count];
		if(rainfall[count] > max){
			max = rainfall[count];
			max_month = count + 1;
		}
		if(rainfall[count] < min){
			min = rainfall[count];
			min_month = count + 1;
		}
	}

	double average = total / MONTHS;

	cout << "Total rainfall(inches) for year = " << total << endl;
	cout << "Average monthly rainfall(inches) = " << average << endl;
	cout << "Lowest month of rainfall = " << min_month << endl;
	cout << "Lowest amount of rainfall(inches) = " << min << endl;
	cout << "Highest month of rainfall = " << max_month << endl;
	cout << "Highest amount of rainfall(inches) = " << max << endl;
}