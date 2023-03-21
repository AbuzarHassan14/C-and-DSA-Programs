
//intesection between two arrays when both arrays are unsorted or may be sorted
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

void intersectionArray(int arr1[], int arr2[], int size1, int size2) {
	int ans[100];
	int k = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) {
				ans[k] = arr1[i];
				k++;
			}
		}
		
	}
	cout << " Intersection of two array " << endl;
	if (k != 0) {
		for (int i = 0; i < k; i++) {
			//cout << "k " << k << endl;
			cout << ans[i] << "  ";
		}
	}
	else {
		cout << "-1" << endl;
	}
}

int main()
{
	cout << "warning!! both array must be sorted "<< endl;

	int arr[100], arr1[100], size1 = 0, size2 = 0;
	cout << "Enter the size of 1st array ";
	cin >> size1;
	settingArray(arr, size1);
	cout << "Enter the size of 2nd array ";
	cin >> size2;
	settingArray(arr1, size2);
	cout << " Displaying array 1st " << endl;
	displayingArray(arr, size1);
	cout << endl;
	cout << " Displaying array 2nd " << endl;
	displayingArray(arr1, size2);
	cout << endl;
	intersectionArray(arr, arr1, size1, size2);
	




}
