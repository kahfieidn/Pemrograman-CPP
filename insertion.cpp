#include <bits/stdc++.h>

using namespace std;

void functionInsertionSort(int arr[], int length){
	int key;
	for(int i=1; i < length; i++){
		key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void showArr(int arr[], int length){
	for(int i=0; i < length; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = {17, 1, 21, 7, 27, 5};
	int length = sizeof(arr)/sizeof(arr[0]);
	
	functionInsertionSort(arr, length);
	showArr(arr, length);
	return 0;
}
