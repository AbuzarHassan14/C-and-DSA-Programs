// Reverse an integer.cpp 

#include <iostream>
using namespace std;

int main()
{
	int num=0,reverseNum=0;
	cout << "Enter a number ";
	cin >> num;
	while (num != 0) {
		int lastDigit = num % 10;
	
		reverseNum *= 10;
		reverseNum+= lastDigit;
		num = num / 10;
		
	}
	//agr hum integer ko reverse krn ur wo integer ki range sy bahir chla jy to wo us number ki jgha "0" return kr dy..
	if ((reverseNum < INT_MIN / 10) || (reverseNum > INT_MAX / 10)) {

		cout << "reverse integer is out of range" << endl;

	}
	else {
		cout << "Reversed Number is : " << reverseNum << endl;
	}
	


}