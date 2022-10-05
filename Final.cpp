#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void fileTransfer(int [], double [], int);
void arraySort(int [], double [], int);
void newFile(const int [], const double [], int);
void userInput(const int [], const double [], int);
int arraySearch(const int [], const double [], int, int);

void main(){
	const int SIZE = 1000;
	int acctNums[SIZE];
	double acctValues[SIZE];

	cout << setprecision(2) << fixed;
	fileTransfer(acctNums, acctValues, SIZE);
	arraySort(acctNums, acctValues, SIZE);
	newFile(acctNums, acctValues, SIZE);
	userInput(acctNums, acctValues, SIZE);
}


void fileTransfer(int nums[], double vals[], int size){
	ifstream input;
	input.open("Final_Random_Accounts_Unsorted.txt");

	for(int i = 0; i < size; i++){
		if(input)
			input >> nums[i];
			input >> vals[i];
	}

	input.close();
}

void arraySort(int nums[], double vals[], int size){
	int minIndex, minNum;
	double minVal;

	for(int start = 0; start < (size - 1); start++){
		minIndex = start;
		minNum = nums[start];
		minVal = vals[start];

		for(int i = (start + 1); i < size; i++){
			if(nums[i] < minNum){
				minNum = nums[i];
				minVal = vals[i];
				minIndex = i;
			}
		}

		nums[minIndex] = nums[start];
		vals[minIndex] = vals[start];
		nums[start] = minNum;
		vals[start] = minVal;
	}
}

void newFile(const int nums[], const double vals[], int size){
	ofstream output;
	output.open("Final_Random_Accounts_Sorted_Last_First.txt");

	for(int i = 0; i < size; i++){
			output << nums[i];
			output << "\t" << vals[i];
			if(i < size - 1)
				output << endl;
	}

	output.close();
}

void userInput(const int nums[], const double vals[], int size){
	int acctUser;

	cout << "Please enter account number to search:";
	cin >> acctUser;

	int search = arraySearch(nums, vals, size, acctUser);

	if(search != -1)
		cout << "Found account: " << acctUser << "\tBalance = $" << vals[search] << endl;
	else
		cout << "Could NOT find account: " << acctUser << endl;
}

int arraySearch(const int nums[], const double vals[], int size, int acct){
	int begin = 0;
	int end = size - 1;
	int middle;
	int position = -1;
	bool found = false;

	while(begin <= end && !found){
		middle = (begin + end) / 2;
		if(nums[middle] == acct){
			found = true;
			position = middle;
		}
		else if(nums[middle] > acct){
			end = middle - 1;
		}
		else{
			begin = middle + 1;
		}
	}

	return position;
}