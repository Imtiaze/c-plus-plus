#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int remainder;
    int reverse = 0;

    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    cout << reverse << endl;

    return 0;
}