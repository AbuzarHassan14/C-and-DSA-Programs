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
void reverseArray(int arr[], int size) {
	int start = 0;
	int end = size-1;
while(start<=end){
	swap(arr[start], arr[end]);
		start++;
		end--;
	}
}
int main() {
	int size = 0;
	int arr[100];
	cout << "Enter size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << endl << "Reverse an array Fuction call " << endl;
	reverseArray(arr, size);
	cout << endl << "Displaying Reversed array  " << endl;
	displayingArray(arr, size);


}