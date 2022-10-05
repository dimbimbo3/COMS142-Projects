#include <iostream>
#include <iomanip>
using namespace std;

void main(){
	int count = 0;
	double increase = 0;
	double fee = 2500;
	int starting_fee = 2500;

	while(count <= 6){
		cout << setprecision(2) << fixed;
		cout << "Year: " << count << " Increase: " << increase << " Fee: " << fee << endl;
		count++;
		increase += .04;
		fee = starting_fee + (starting_fee * increase);
	}
}