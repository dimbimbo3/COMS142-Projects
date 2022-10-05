#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream input;
	double value;
	double min;
	double max;
	double total;
	double count;
	
	input.open("Data1.txt");//Data1 Start

	if(input) {
		input >> value;
		max = value;
		min = value;
		total = value;
		count = 1;

		while(input >> value) {
			if(value > max)
				max = value;
			else if(value < min)
				min = value;
			total += value;
			count++;
		}

		double average = total / count;

		cout << "Data1 Min=" << min << endl;
		cout << "Data1 Max=" << max << endl;
		cout << "Data1 Average=" << average << endl;

		input.close();
	}

	else
		cout << "File failed to open." << endl;//Data1 End
	
	input.open("Data2.txt");//Data2 Start

	if(input) {
		input >> value;
		max = value;
		min = value;
		total = value;
		count = 1;

		while(input >> value) {
			if(value > max)
				max = value;
			else if(value < min)
				min = value;
			total += value;
			count++;
		}

		double average = total / count;

		cout << "Data2 Min=" << min << endl;
		cout << "Data2 Max=" << max << endl;
		cout << "Data2 Average=" << average << endl;

		input.close();
	}

	else
		cout << "File failed to open." << endl;//Data2 End

	input.open("Data3.txt");//Data3 Start

	if(input) {
		input >> value;
		max = value;
		min = value;
		total = value;
		count = 1;

		while(input >> value) {
			if(value > max)
				max = value;
			else if(value < min)
				min = value;
			total += value;
			count++;
		}

		double average = total / count;

		cout << "Data3 Min=" << min << endl;
		cout << "Data3 Max=" << max << endl;
		cout << "Data3 Average=" << average << endl;

		input.close();
	}

	else
		cout << "File failed to open." << endl;//Data3 End
}