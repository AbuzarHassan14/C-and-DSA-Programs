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

void sort0s1sAnd2s(int arr[], int size) {
	cout << "in the function " << endl;
	int i = 0,j=1,k=size-1;
	cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
	while ( i!=k  && j != k) {//j!=k
		cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
		cout << "in loop" << endl;
		if (arr[i] == 0) {
			cout << "cheaking i " << endl;
			cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
			i++;
		}
		if (arr[j] == 1) {
			cout << "cheaking j " << endl;
			cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
			j++;
		}
		if (arr[k] == 2) {
			cout << "cheaking k " << endl;
			cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
			k--;
		}
		if (arr[i] == 1 && arr[j] == 0  || arr[i] == 2 && arr[j] == 0) {
			cout << "cheaking i and j " << endl;
			cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
			swap(arr[i], arr[j]);
			i++;
			j++;

		}
		if (arr[i] == 2 && arr[k] == 0  || arr[i] == 1 && arr[k] == 0) {
			cout << "cheaking i and k " << endl;
			cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
			swap(arr[i], arr[k]);
			i++;
			k--;
		}
		if (i == j) {
			j = k + 1;
			swap(arr[i], arr[j]);
		}
		if (arr[j] == 2 && arr[k] == 1 ) {
			cout << "cheaking j and k " << endl;
			cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
			swap(arr[j], arr[k]);
			k--;
			j++;

		}
		cout << "end loop" << endl;
		cout << "*****************************************" << endl;
		displayingArray(arr, size);
		cout << endl;
		if (k == -1) {
			return;
		}
		cout << "i " << i << "  " << "j " << j << "  " << "k " << k << "  " << endl;
		cout << "*******************************************" << endl;
	}
}


////////////////////////////////////////////////////////



int main() {

	int arr[100], size = 0, key = 0;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout << endl << "  sorting  " << endl;
	sort0s1sAnd2s(arr, size);
	displayingArray(arr, size);

}

