#include<bits/stdc++.h>

using namespace std;

int main() 
{
    vector<int>vc;

    vc.push_back(0);
    vc.push_back(1);
    vc.push_back(2);
    vc.push_back(3);
    vc.push_back(4);

    cout << vc[5] << " ";
    cout << vc[99] << " ";
    
    // out put : 0 0
    
    cout << vc.at(5) << " ";
    cout << vc.at(99) << " ";
    
    // Output :  terminate called after throwing an instance of 'std::out_of_range' what():  vector::_M_range_check: __n (which is 5) >= this->size() (which is 5)
}
