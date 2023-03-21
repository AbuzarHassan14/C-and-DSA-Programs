// Complement of base 10 integer
//to take complement   " ~num & mask = ans " have this formula
// we should need MASK because when we take NOt of num then all starting zeros are converted to ones to ignore ones we use mask
// newNum will initialized with num because when num come into loop then on the break of loop num will be zero....
#include <iostream>
using namespace std;

int main()
{   
    int num = 0, mask = 0, ans = 0,newNum=0;

    cout << "Enter the number ";
    cin >> num;
    if (num == 0) {
        cout << "complement of [ 0 ] is : 1"<<endl;

    }
    else {
        newNum = num;
        while (num != 0) {
            mask = (mask << 1) | 1;
            num = num >> 1;
        }
        ans = ~newNum & mask;
        cout << "complement of [ " << newNum << " ] is : " << ans << endl;
    }

}
