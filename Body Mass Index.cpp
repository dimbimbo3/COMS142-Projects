#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

void main(){
	double weight;
	double height;

	cout << "Please enter your weight(lbs):";
	cin >> weight;

	cout << "Please enter your height(inches):";
	cin >> height;

	double BMI = weight * 703 / pow(height, 2);

	cout << "Your BMI= " << BMI << endl;

	if(BMI >= 18.5)
		if (BMI > 25)
			cout << "You're overweight" << endl;
		else
			cout << "You're within the optimal weight" << endl;
	else
		cout << "You're underweight" << endl;
}