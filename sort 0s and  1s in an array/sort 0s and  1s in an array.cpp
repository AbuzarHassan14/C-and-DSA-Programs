#include<iostream>
using namespace std;
void settingArray(int arr[], int size) {
	cout << "   Enter Element in array " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}
}
void displayingArray(int arr[], int size) {
	cout << endl << "        printing an array " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";

	}
}
void sort0sAnd1s(int arr[], int size) {
	// this solve by two pointer approach
	int i = 0, j = size-1;
	while (i < j) {
		if (arr[i] == 0 ) { 
			i++;
		}
		if (arr[j] == 1) {
			j--;
		}
		//jab hum zahan ayn gy to iska matlab hai k 
		//arr[i]==1 && arr[j]==0 to then hum swap krn gy
			swap(arr[i], arr[j]);
			i++;
			j--;
		

	}


}


int main() {

	int arr[100], size = 0, key = 0;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << endl << "  sorting  " << endl;
	sort0sAnd1s(arr, size);
	displayingArray(arr, size);
	
}
