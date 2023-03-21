#include<iostream>
using namespace std;
int sumOfArrayEle(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}
int main() {
	int size = 0;
	int arr[100];
	cout << "Enter size of an array ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}
	cout<<endl << "        printing an array " << endl;
	for (int i = 0; i < size; i++) {
		cout<< arr[i]<<"  ";

	}
	cout << endl << "sum of all element of an array is : " << sumOfArrayEle(arr, size);
}