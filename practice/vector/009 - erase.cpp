#include<bits/stdc++.h>

using namespace std;

int main() 
{
	vector<int>vc;

    vc.push_back(1);
    vc.push_back(2);
    vc.push_back(3);
    vc.push_back(4);
    vc.push_back(5);

    for (int i = 0; i < vc.size(); i++) {
    	cout << vc.at(i) << " ";
	}
	cout << endl;
	vc.erase(vc.begin() + 1, vc.end()-2);
	
	for (int i = 0; i < vc.size(); i++) {
    	cout << vc.at(i) << " ";
	}
}
