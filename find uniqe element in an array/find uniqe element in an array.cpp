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

int uniqeElement(int arr[], int size) {
	int ans = 0;
	for (int i = 0; i < size; i++) {
		ans = ans ^ arr[i];  //0^1=1 and 1^1=0
	}
	return ans;
}
int main() {
	int arr[100], size = 0;
	cout << "Enter the size of an array ";
	cin >> size;
	settingArray(arr, size);
	displayingArray(arr, size);
	cout<<endl << "  uniqe element in an array is : "<<uniqeElement(arr,size) << endl;



}