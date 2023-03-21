// nCr question through Function concept


#include <iostream>
using namespace std;

int factorial(int num) {
	int factNum = 1;
	for (int i = num; i!=1 ; i--) {
		//cout << "1 " << factNum << endl;
		factNum *= i;
		
	}
	//cout << "fact num " << factNum << endl;
	return factNum;
}
int nCr(int num1, int num2) {
	int num = factorial(num1);
	int dem = factorial(num2) * factorial(num1 - num2);
	return num / dem;
	//return factorial(num1) / (factorial(num2) * factorial(num1-num2));

}
int main()
{
	int n = 0, r = 0, ans=0;
	cout << "Enter value of N ";
	cin >> n;
	cout << "enter value of R ";
	cin >> r;
	ans = nCr(n, r);
	cout << "nCr " << ans << endl;



}
