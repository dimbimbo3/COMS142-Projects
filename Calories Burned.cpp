#include <iostream>
#include <iomanip>
using namespace std;

void main(){
	int count = 5;
	double cal_min = 3.6;

	while(count <= 30){
		cout << "Minutes: " << setw(2) << count << " Calories burned: " << cal_min * count << endl;
		count += 5;
	}
}