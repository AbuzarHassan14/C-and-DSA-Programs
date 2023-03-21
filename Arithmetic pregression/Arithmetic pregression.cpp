// Arithmetic pregression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int arithmeticPreg(int num) {
	return (3 * num + 7); //formula
}
int main()
{
	int num = 0;
	cout << "Enter the number ";
	cin >> num;
	cout << "A.P of " << num << " is " << arithmeticPreg(num);
  
}
