//sawp alternate in  which we just swap two element of an array with each other
//e.g if array is {1,2,3,4,5,6} then OUTPUT will be {2,1,4,3,6,5}
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
void swapAlternate(int arr[], int size) {
	/*int start = 0;
	int alternate = 1;*/
	for (int i = 0; i < size; i+=2) {
		if (i + 1 < size) {  // this condition is helpful for odd case
			swap(arr[i], arr[i+1]);
		/*	alternate += 2;
			start += 2;*/
		}
	}
}

int main() {
	int arr[100], size=0;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << " swap alternate fuction call " << endl;
	swapAlternate(arr, size);
	cout << " displaying an array after function call " << endl;
	displayingArray(arr, size);



}