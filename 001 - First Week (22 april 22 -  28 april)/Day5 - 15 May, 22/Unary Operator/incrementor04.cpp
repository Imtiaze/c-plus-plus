#include<iostream>
using namespace std;

int main()
{
    int i = 1, j = 2, k = 3;
            
        //  1  -  2  -  3
    int m = i-- - j-- - k--;
        //    0     1    2
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m<<endl;

    return 0;
}

/* 

Output:

0
1
2
-4


 */