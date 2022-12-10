#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int  nums[4] = {2,7,11,15}; int target = 22; int r; int r1; int r2; int isFound = false;
	
	for (int i = 0; i < 4; i++) {
			cout << nums[i] << endl;
	}
	
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++) {
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
	
	cout << "[" << r1 << "," << r2 << "]";
}
