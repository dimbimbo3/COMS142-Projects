#include <iostream>
#include <iomanip>
using namespace std;

double celsius(int);

void main(){
	int min = 0;
	int max = 20;

	cout << setprecision(2) << fixed;

	do{
		double converted = celsius(min);
		cout << setw(5) << left << min << " Degrees Fahrenheit\t=\t" << setw(10) << converted <<  " Degrees Celsius" << endl;
		min++;
	}while(min <= max);
}

double celsius (int f){
	double convertor = 5.0/9.0 * (f -32);
	return convertor;
}