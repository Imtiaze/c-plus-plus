#include<iostream>
using namespace std;

int main () {
    
    int N;

    cin>>N;
    
    int i = 2;

    for ( i ; i < N; i++) {
        if (N%i == 0) {
            break;
        }
    }

    if (i == N) {
        cout<<"Prime";
    } else {
        cout<<"Not Prime";
    }

    return 0;
}
