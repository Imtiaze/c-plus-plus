/* 
print: Number patern

    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5

 */


#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int row = 0;
    int prev = 0;

    for (int i = 1; i <= n ; i++) {
        int space = n - i;
        row = prev + i; 

        for (int j = 1; j <= space ; j++) {
            cout << " ";
        }
        for (int c = 1; c <= row; c++) {
            cout << " *";
        }
        prev = i;
        cout << endl;
    }
}