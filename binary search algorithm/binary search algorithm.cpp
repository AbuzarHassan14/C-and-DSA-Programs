//binary search
// warning!!!!!! Array/data structue Must be monotonic function(increasing or decreasing order)
// 
// 
//1. mid calculate i.e mid=(start+end)/2  ....... here Start and End are indexes NOTE we have change this formula into
// 
// mid=start+(end-start)/2  b/c if lets say we have both start and end = 2 ki power 31 then by adding this ans will be out of integer range
// so in this formula we are subtracting start ko from end ..........
//
//2. key ko compare kren gy mid sy
//
//3. identify kren gy k hum ko kis side ja na hai  left or right to search






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

int binarySearch(int arr[], int size, int key) {
	int start = 0;
	int end = size - 1;
	int mid = (start+(end-start)) / 2; //b
	int ans = 0;
	while (start<=end) {//if start > end then break loop
		if (arr[mid] == key) {
			cout << "key founded at index : ";
			return mid;
			cout << endl;
		}
		if (key > arr[mid]) {
			start = mid+1;
		
		}
		else {
			end = mid - 1;
			
		}
		mid = (start + (end - start)) / 2;

	}
	cout << "key not founded in an array so  : ";

	return -1;
	cout << endl;
}


////////////////////////////////////////////////////////



int main() {

	int arr[100], size = 0, key = 0;
	cout << "        array must be sorted i  binary search " << endl;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	cout << endl;
	displayingArray(arr, size);
	cout << endl << " Enter the key  ";
	cin >> key;
	
		cout <<binarySearch(arr, size, key) << endl;


}

