//in this program we have Total amount and we have to tell that how many note of 100,50,20,1 are required for total amount 
//using switch statement
// here how we use switch statement??????????????????????????????????????????????????????????????
#include<iostream>
using namespace std;
int main() {
	int totalAmount = 0, counter = 0,divider;
	cout << "Enter total amount you have ";
	cin >> totalAmount;
	if (totalAmount == 0) {
		cout << "Entered amount is zero so there is no note of any type " << endl;
	}
	else {
		while (totalAmount != 0) {
			if (totalAmount >= 100) {
				divider = totalAmount / 100;
				totalAmount = totalAmount % 100;
				//totalAmount = counter;
				cout << "total note of 100 is " << divider << endl;
				divider = 0;
			}
				if (totalAmount >= 50 && totalAmount < 100) {

					divider = totalAmount / 50;
					totalAmount = totalAmount % 50;


					cout << "total note of 50 is " << divider << endl;
					divider = 0;
				}if (totalAmount >= 20 && totalAmount < 50) {

					divider = totalAmount / 20;
					totalAmount = totalAmount % 20;


					cout << "total note of 20 is " << divider << endl;
					divider = 0;
				}
				if (totalAmount >= 1 && totalAmount < 20) {

					divider = totalAmount / 1;
					totalAmount = totalAmount % 1;


					cout << "total note of 1 is " << divider << endl;
					divider = 0;
				}
			
		}
	}

}