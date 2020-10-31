#include <bits/stdc++.h>

using namespace std;

void tukar(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void FunctionbubbleSort(int arr[], int length){

	for(int i = 0; i < length-1; i++){
		for(int j = 0; j < length-i-1; j++){
			if(arr[j] > arr[j+1]){
				tukar(&arr[j], &arr[j+1]);
			}
		}
	}
	
}

void ShowbubbleSort(int arr[], int size){
	
	for(int i=0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	int arr[] = {17,1,21,7,27};
	int length = sizeof(arr)/sizeof(arr[0]);
	FunctionbubbleSort(arr, length);
	ShowbubbleSort(arr, length);
	
	return 0;
}
