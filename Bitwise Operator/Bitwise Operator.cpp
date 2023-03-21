#include<iostream>
using namespace std;
int main() {

	int a = 2, b = 3;
	int c = 0;
	c = a & b;

	cout << "And operator " << c << endl;
	c = a | b;
	cout << "OR operator " << c << endl;
	c = ~a;
	cout << "NOT operator " << c << endl;
	c = a ^ b;
	cout << "XOR operator " << c << endl;
	//left shit:
	int x = 5 << 1;
	cout << "left shift " << x << endl;;
	//Right shit:
	int t = 5 >> 1;
	cout << "Right shift " << t << endl;


}