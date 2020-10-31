#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void functionSelectionSort(int arr[], int length){
	int min_index;
	
	for(int i=0; i < length-1; i++){
		min_index = i;
		for(int j = i+1; j < length;j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		swap(&arr[min_index], &arr[i]);
	}
	
}

void showArr(int arr[], int length){
	
	for(int i=0; i < length; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	
	int arr[] = {17, 1, 21, 7};
	int length = sizeof(arr)/sizeof(arr[0]);
	functionSelectionSort(arr, length);
	showArr(arr, length);
	return 0;
	
}
