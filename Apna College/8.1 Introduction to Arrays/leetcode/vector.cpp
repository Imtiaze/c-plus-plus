#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() 
{
	

	vector<int> kids{2,3,5,1,3};
	vector<bool> result;
	int extra_candies = 3;
	int total_kids = kids.size();
	int max_candies = *max_element(kids.begin(), kids.end());
	cout << max_candies << " " << total_kids;
	
	for (int x : kids) {
		if (x + extra_candies >= max_candies) {
			result.push_back(true);
		} else {
			result.push_back(bool);
		}
	} 
  
    return 0;
}

