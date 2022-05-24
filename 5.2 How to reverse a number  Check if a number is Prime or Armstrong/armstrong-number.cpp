/* 

153 is armstrong number. How?

153 = 1 to the power 3 + 5 to the power 3 + 3 to the power 3
    = 1 + 125 + 27
    = 153

 */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, total = 0,  lastDigit;
    cin >> n;

	int originalN = n;
    while(n != 0)
    {
        lastDigit = n % 10;
        total += pow(lastDigit, 3);
        n = n / 10;
    }

    if (originalN == total) {
        cout << originalN << " is a Armstrong number." << endl;
    } else {
        cout << originalN << " is not a Armstrong number." << endl;
    }
}
