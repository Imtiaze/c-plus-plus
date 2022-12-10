/* 

Print : 0-1 Pattern


1
01
101
0101
10101


1
(1,1)
0        1
(2,1)  (2,2)
1        0     1
(3,1) (3,2) (3,3)
0        1     0    1
(4,1) (4,2) (4,3)  (4,4)
1        0     1    0     1
(5,1) (5,2) (5,3)  (5,4)  (5,5)

For elements -

if i add all 1's place position (row+col), all they have given event numbers
1+1 = 2
2+2 = 4
.......
.......
5+5 = 10

so, we can say 

if (row + col % 2 == 0) {
 print "1"
}

lets see the code

 */

#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i+j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}