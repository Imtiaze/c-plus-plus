#include<bits/stdc++.h>
using namespace std;

int main () 
{
	vector<int> kids_candies{2,3,5,1,3};
	
	int max_candies = *max_element(kids_candies.begin(), kids_candies.end());
		
	cout << max_candies << endl;
	
	return 0;
}
