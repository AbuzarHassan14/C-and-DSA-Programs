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
void pairSum(int arr[], int size, int key) {

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {//j=I+1 b/c if j=1 then pair sum is repeated
			for (int k = j + 1; k < size; k++) {
				if (arr[i] + arr[j]+ arr[k] == key) {
					if (arr[i] > arr[j]) {//sort pair ko (0,1)(small, large)
						cout << arr[j] << "  " << arr[i]<<"  "<<arr[k] << endl;
					}
					else {
						cout << arr[i] << "  " << arr[j] <<"  "<<arr[k] << endl;
					}
				}
			}

		}

	}


}


int main() {

	int arr[100], size = 0, key = 0;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << endl << "Enter the key ";
	cin >> key;
	cout << "     pair sum in an array of key are :- " << endl;
	pairSum(arr, size, key);
}
