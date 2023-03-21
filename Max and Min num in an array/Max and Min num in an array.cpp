// Max and Min num in an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void arrayInput(int num[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> num[i];

    }
}
int getMax(int num[], int size) {
    int max = INT_MIN;//-2 ki power 31  hum ny kh dia k max main sab sy bari value INT_MIN hogi (jo k sab sy minimum value of integer hai)
    //int maxi = INT_MIN;
    for (int i = 0; i < size; i++) {
        //maxi = max(maxi, num[i]);  //predefine function 
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int size) {
    int min = INT_MAX;//2 ki power 31-1
    for (int i = 0; i < size; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int number[10];
    cout << "Enter the elements in array ";
    arrayInput(number, 10);
    cout << "maximun number in an array  " << getMax(number, 10)<<endl;
    cout << "minimun number in an array  " << getMin(number, 10)<<endl;

    
}
