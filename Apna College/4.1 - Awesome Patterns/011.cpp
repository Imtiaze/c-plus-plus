#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j <= n * 2; j++) {
            if (i >= j || j > n*2 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = n * 2; j >= 1; j--) {
            if (i >= j || j > n * 2 - i ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}