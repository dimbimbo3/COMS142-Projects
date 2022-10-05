#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
In this lab you will complete the implementation of the following function 
prototypes.  The main() method "driver" is complete, you will just need to 
implement the other function "stubs".  Comments related to each functions 
specification is listed below.  Remember, the default behavior of array
types in C++ are passed by reference.
*/

//Function prototypes
void fillArray(int [], int);
void copyArray(const int [], int [], int);
bool compareArrays(const int [], const int [], int);
void displayArray(const int[], int);

//Main "driver" function is complete
void main(){
	const int SIZE = 10;
	//Create two arrays each to hold 10 int's
	int array1[SIZE];
	int array2[SIZE];

	//1) Fill array1
	srand(time(0));
	fillArray(array1, SIZE);

	//2) Copy the contents of array1 to array2
	copyArray(array1, array2, SIZE);
	
	//3) Test if the two arrays are equal
	//   (they should be if the previous step is completed correctly)
	bool equal = compareArrays(array1, array2, SIZE);
	
	if(equal)
		cout << "Both arrays are equal" << endl;
	else
		cout << "Both arrays are NOT equal" << endl;

	//4) Display both arrays
	cout << "First Array:" << endl;
	displayArray(array1, SIZE);
	cout << endl;

	cout << "Second Array:" << endl;
	displayArray(array2, SIZE);
	cout << endl;
}

//Fill the array with random int values 
//between 0 and 500
void fillArray(int arr[], int size){
	for (int count = 0; count < size; count++) {
		int random = (rand() % 500) + 1;
		arr[count] = random;
	}
}

//Copy the contents of the first array to the second array
void copyArray(const int arr1[], int arr2[], int size){
	for (int count = 0; count < size; count++)
		arr2[count] = arr1[count];
}

//Test if the array contents are equal
bool compareArrays(const int arr1[], const int arr2[], int size){
	bool compare = true;
	for (int count = 0; count < size; count++) {
		if (compare && arr1[count] == arr2[count])
			compare = true;
		else
			compare = false;
	}
	return compare;
}

//Display each element in the array to the console
void displayArray(const int arr[], int size){
	for (int count = 0; count < size; count++)
		cout << arr[count] << " ";
}