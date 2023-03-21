// no. of ones bit in a number.cpp
#include <iostream>
using namespace std;

int main()
{
	unsigned int num = 0;
	cout << "enter a number ";
	cin >> num;
	 

	int count = 0;
	while (num != 0) {
		//checking last bit
		if (num & 1) {
			count++;
		}
		//use of right shift operator to check is tere is any 1 bit more
		num = num >> 1;
	}
	cout << "Number of 1 Bits : " << count << endl;
	
}
