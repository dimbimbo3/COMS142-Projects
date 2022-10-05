#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void main(){
	double loan_amount; 
	double annual_rate;
	double monthly_rate; 
	double length_years;
	double length_months; 

	cout << "Please enter the amount of the loan: ";
	cin >> loan_amount;

	cout << "Please enter the interest rate(in years): ";
	cin >> annual_rate;
	monthly_rate = annual_rate / 12;

	cout << "Please enter the length of the loan(in years): ";
	cin >> length_years;
	length_months = length_years *  12;

	double powexp = pow(1 + monthly_rate, length_months);
	double numerator = monthly_rate * powexp;
	double denominator = powexp - 1;
	double monthly_payment = loan_amount * (numerator / denominator);
	
	cout << setprecision(2) << fixed << endl;
	cout << "Loan amount: $" << loan_amount << endl;
	cout << "Term (years): " << length_years << endl;
	cout << "Interest Rate (Annual): " << annual_rate << endl;
	cout << "Your monthly payment=$" << monthly_payment << endl;

	cout << endl;
	cout << setw(10) << right << "Payment" << setw(10) << right << "Interest" << setw(10) << right << "Principle" <<  setw(10) << right << "Balance" << endl;
	cout << setw(40) << loan_amount << endl;

	for(int count = 1; count <= length_months; count++){
		double interest_payment = (loan_amount * monthly_rate);
		double principle = (monthly_payment - interest_payment);
		loan_amount -= principle;
		cout << setw(10) << right << count << setw(10) << right << interest_payment << setw(10) << right << principle <<  setw(10) << right << loan_amount << endl;
	}
}