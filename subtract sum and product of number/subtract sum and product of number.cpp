// subtract sum and product of number

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "Enter a number you want to get its product and sum then subtract it ";
	cin >> num;
	int prod = 1;
	int sum = 0;
	int i = 1;
	while(num!=0) {
		cout << "iteration "<<i << endl;
		int lastDigit = num % 10;
		cout << "Lastdigit "<<lastDigit << endl;
		prod *= lastDigit;
		cout << "Product "<<prod << endl;
		sum += lastDigit;
		cout << "Sum "<<sum << endl;
		num = num / 10;
		cout << "Number "<<num  << endl;
		i++;

	}

	int subt = prod - sum;
	cout << "Answer : " << subt << endl;

}
