// nth term in Fabinocee series.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int update(int a) {
    a -= 5;
    return a;
}

int febinoceeNthterm(int n) {
    int num1 = 0;
    int num2 = 1;
    int ans = 0;
   cout << num1 << " " << num2 << " ";
    for (int i = 1; i <= n; i++) {
      
        ans = num1 + num2;
        cout << ans << " ";
        num1 = num2;
        num2 = ans;
      

    }
 
    cout << endl;
    return (num2-num1); //nth term
 
}
int main()
{
   int num=0;
    cout << "Enter value of num ";
    cin >> num;
    cout <<"Nth term in febinocee series is "<< febinoceeNthterm(num);
    cout << endl;

    

}
