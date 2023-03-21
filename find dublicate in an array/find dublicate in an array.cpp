// find dublicate in an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
int dublicatElement(int arr[], int size) {

	int ans = 0;
	cout << endl;
	//XOR ALL ARRAY ' ELEMENTS ' [0 TO N-1]
	for (int i = 0; i < size; i++) {
		ans = ans ^ arr[i];

	}
	cout << endl;
	// XOR [1,N-1] ' index '
	for (int i = 1; i < size; i++) {
		ans = ans ^ i;
	}
	return ans;
}

int main()
{

	int arr[100], size = 0;
	cout << "    WARNING!!! array contain only one dublicate element " << endl;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << endl<<"dublicate in an array is : "<<dublicatElement(arr,size);
	

}
