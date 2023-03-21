//power of two: the number we input that can be writen into power of two or not 
// E.G: 16 = 2 ki power 4 return true                   44 = cannot be writen into 2 ki power
//Ans is use to reuse ans instead of ans we can use pow(2,i) but this is not efficient
//loop from 0 to 30 means 31 times the range of integer is 2 ki power 31 -1
// 
#include<iostream>
using namespace std;

bool isPowOfTwo(int n) {
	int ans = 1;
	for (int i = 0; i <= 30; i++) {
		//cout << "ans ["<<i<<"] " << ans << endl;
		if (ans == n) {
			return true;
		}
	
			ans = ans * 2;
	}
	return false;
}
int main() {
	int num;
	cout << "Enter the number ";
	cin >> num;
	cout << isPowOfTwo(num);

}