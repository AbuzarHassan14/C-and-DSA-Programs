#include<iostream>
using namespace std;
void settingArray(int arr[],int size) {
	cout << "   Enter Element in array " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}
}
void displayingArray(int arr[],int size) {
	cout << endl << "        printing an array " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";

	}
}
int linearSearch(int arr[],int size,int key) {
	//key is variable which you want to search in an array

	for (int i = 0; i < size; i++) {
		if (key == arr[i]) {
			return i;
		}
	}

	return false;
}
int main() {
	int size = 0, key = 0;
	int arr[100];
	cout << "Enter size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << "Enter the key which you want to search in an array ";
	cin >> key;
	cout<<endl << "key is : " << key << endl;
	if (linearSearch(arr, size, key)) {
		cout << "key founded at index " << linearSearch(arr, size, key) << endl;
	}
	else {

		cout << "key is not founded so  it is " << linearSearch(arr, size, key) << endl;
	}

	
	
}