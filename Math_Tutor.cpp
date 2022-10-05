#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void main(){
	unsigned int clock = time(0);
	srand(clock);

	int num1 = rand();
	int num2 = rand();

	num1 %= 100 + 1;
	num2 %= 100 + 1;

	cout << setw(5) << num1 << endl;
	cout << "+" << setw(4) << num2 << endl;
	cout << "-----" << endl;
	cout << "Please enter the answer...";
	int user_answer;
	cin >> user_answer;
	int correct_answer = num1 + num2;

	if(user_answer == correct_answer){
			cout << "Your answer is correct, well done!" << endl;
	}

	if(user_answer != correct_answer)
		cout << "Sorry, but the correct answer is: " << correct_answer << endl;

}