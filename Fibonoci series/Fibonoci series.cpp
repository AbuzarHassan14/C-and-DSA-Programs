#include <iostream>
using namespace std;
int main()
{
//{0,1,1,2,3,5,8,13.......} last two add and next number come...
	int n;
	//to make series we at least need two number(first i.e 0 and 1) so
	int a = 0;
	int b = 1;
	cout << "Fibonoci series" << endl;
	cout << "enter the number you want to make Fibonoci series ";
	cin >> n;
	cout << a << " " << b << " ";
	for (int i = 0; i < n; i++) {
		int nextNum = a + b;
		cout << nextNum << " ";
		a = b;
		b = nextNum;
	}
	cout << endl;
}
