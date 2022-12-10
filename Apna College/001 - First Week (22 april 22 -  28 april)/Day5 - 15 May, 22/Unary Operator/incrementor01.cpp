#include<iostream>

using namespace std;

int main() {

    int a = 1;
        
        //1   //3
    a = a++ + ++a;
        // next operant post increment will be excuted
    cout << a;
}