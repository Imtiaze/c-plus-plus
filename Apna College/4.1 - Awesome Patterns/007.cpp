/* 

print : Half pyramid using nummbers

1    
22   
333  
4444 
55555
 */



#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int rows = 1; rows <= n; rows++) {
        for (int cols = 1; cols <= rows; cols++) {
            cout << rows;
        }
        cout << endl;
    }
}