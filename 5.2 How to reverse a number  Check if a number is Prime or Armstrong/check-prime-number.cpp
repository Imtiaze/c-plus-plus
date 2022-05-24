#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int number;
    bool flag = 0;
    cin >> number;

    for (int i = 2; i < sqrt(number); i++) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << number << " is a prime number"; 
    } else {
        cout << number << " is not a prime number"; 
    }

    return 0;
}