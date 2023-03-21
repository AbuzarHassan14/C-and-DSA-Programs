//binary to decimal 
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int num = 0, i = 0, ans = 0;
	cout << "Enter the binary number ";
	cin >> num;
	while (num != 0) {
		int digit = num % 10;
		if (digit == 1) {
			ans += pow(2, i);

		}
		num /= 10;
		i++;
	}
	cout << "Answer " << ans;

}
