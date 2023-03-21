#include <iostream>
#include<math.h> //power ka function use kia hai....
using namespace std;
int main()
{
	int num = 0, i = 0, ans = 0;
	cout << "Enter the number to convert it into binary ";
	cin >> num;
	while (num != 0) {
		// getting bits 
		int bit = num & 1;
		//formula that is used to reverse answer/integer
		ans = (bit * pow(10, i) + ans);
		//reight shift due to make num=0
		num = num >> 1;
		//i is power of 10
		i++;

	}
	cout << ans;

}