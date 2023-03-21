#include<iostream>
using namespace std;

bool isPrime(int num) {
	bool index = 1;//number   prime
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			index = 0;
			break;
			
		}
	}
	if (index == 1) {
		cout<< "Number "<<num<<" is prime ";
		return true;
	}
	else {
		cout << "Number " << num << " is not  prime ";
		return false;
	}
	
	
}
int main() {
	int numb;
	cout << "Enter the number ";
	cin >> numb;
	//function call
	cout << isPrime(numb);
}