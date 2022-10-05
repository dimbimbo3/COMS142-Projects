#include <iostream>
#include <iomanip>
using namespace std;

int coinToss();

void main(){
	int heads = 1;
	int tails = 2;
	int flips;

	int clock = time(0);
	srand(clock);

	cout << "Please enter number of coin flips:";
	cin >> flips;

	for(int count = 1; count <= flips; count++){
		if(coinToss() == heads)
			cout << "Toss #" << count << " = Heads"<< endl;
		else if(coinToss() == tails)
			cout << "Toss #" << count << " = Tails"<< endl;
	}
}

int coinToss(){
	int flip = rand();

	flip = (flip % 2) + 1;

	return flip;
}