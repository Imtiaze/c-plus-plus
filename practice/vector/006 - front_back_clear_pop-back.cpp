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
	
	cout << endl << vc.front() << endl;
	cout << vc.back() << endl;
	
	cout << vc.size() << endl;
	vc.clear();
	cout << vc.size() << endl;
	
	
	if (vc.empty()) {
		cout << "Vector is empty.";
	} else {
		cout << "Not Empty";
	}
}
