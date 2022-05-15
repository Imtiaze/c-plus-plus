#include<iostream>
using namespace std;

int main()
{
    int i = 10, j = 20;
            
        //  10  - 9   +  19 - 20  +  9  - 20  +  10 -  19 
    int k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
        //     9     10     19    20    9     19    10    20
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;

    return 0;
}

/* 

output:

10
20
-20
 */