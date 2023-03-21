// total number of Set bit(ones bit ) in two num.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int numbOfSetBit(int a, int b) {
	return (a | b);

}
int main()
{
	int a = 0, b = 0;
	cout << "enter value of num1 ";
	cin >> a;
	cout << "enter value of num2 ";
	cin >> b;
	cout << numbOfSetBit(a, b);
}
