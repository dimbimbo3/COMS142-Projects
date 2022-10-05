#include <iostream>

void selectionSort(int arr[], int length){
	int minIndex, minValue;

	for(int start = 0; start < (length - 1); start++){
		minIndex = start;
		minValue = arr[start];
		for(int i = (start + 1); i < length; i++){
			if(arr[i] < minValue){
				minValue = arr[i];
				minIndex = i;
			}
		}//for

		arr[minIndex] = arr[start];//swap
		arr[start] = minValue;//set min value
	}
}