#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lotteryGen(int[], int);
void userInput(int[], int);
bool winnerTest(const int[], const int[], int, int &);
void display(const int[], const int[], const int, int);

void main(){
	const int SIZE = 5;
	int lottery[SIZE];
	int user[SIZE];
	int match = 0;

	srand(time(NULL));
	lotteryGen(lottery, SIZE);

	userInput(user, SIZE);

	winnerTest(lottery, user, SIZE, match);

	display(lottery, user, match, SIZE);
}

void lotteryGen(int lot[], int size){
	for(int i = 0; i < size; i++){
		int random = (rand() % 10);
		lot[i] = random;
	}
}

void userInput(int user[], int size){
	for(int i = 0; i < size; i++){
		cout << "Please enter #" << i + 1 << ":";
		cin >> user[i];
	}
}

bool winnerTest(const int lot[], const int user[], int size, int &match){
	bool win = true;
	for(int i = 0; i < size; i++){
		if(win && lot[i] == user[i])
			win = true;
		else
			win = false;
	}

	for(int i = 0; i < size; i++){
		if(lot[i] == user[i])
			++match;
	}

	return win;
}

void display(const int lot[], const int user[], const int match, int size){
	cout << "Lottery #s" << endl;
	for(int i = 0; i < size; i++){
		cout << lot[i] << " ";
	}
	cout << endl;

	cout << "User #s" << endl;
	for(int i = 0; i < size; i++){
		cout << user[i] << " ";
	}
	cout << endl;

	if(match == size){
		cout << "You had " << match << " matching numbers." << endl;
		cout << "CONGRATULATIONS, YOU WIN!" << endl;
	}
	else{
		cout << "You had " << match << " matching numbers." << endl;
		cout << "Sorry, you lost!" << endl;
	}
}