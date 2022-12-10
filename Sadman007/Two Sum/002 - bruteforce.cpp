#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int n, i, j, target = 9; 
	int r, r1, r2, isFound = false;
	cin >> n;
	
	int nums[n];
	int numLength = sizeof(nums) / sizeof(nums[0]);
	
	for (i = 0; i < numLength; i++) {
		cin >> nums[i];
	}
	

	for ( i = 0; i < numLength; i++) {

		for ( j = 0; j < numLength; j++) {
			if (i == j) {
				continue;
			} else {
					r = nums[i] + nums[j];
				cout << "r: " << r << endl;
				if (r == target) {
					cout << "should stop";
					cout << i << j << endl;
					r1 = i;
					r2 = j;
					isFound = true;
					break;
				}
			}
		
		}
		
		if (isFound) {
			break;
		}
	}
	
	cout << "[" << i << "," << j << "]";
}
