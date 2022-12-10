#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int kids[] = {2,3,5,1,3};
	int extra_candies = 3;
	int array_length = sizeof(kids)/sizeof(kids[0]); 
	int bool_array[array_length]; 
	int max_candies = INT_MIN;
	
	for (int i = 0; i < sizeof(kids)/sizeof(kids[0]); i++) {
		max_candies = max(max_candies, kids[i]);
	}
	
	for (int i = 0; i < array_length; i++) {
		if (kids[i] + extra_candies >= max_candies) {
			bool_array[i] = true;
		} else {
			bool_array[i] = false;
		}
	}
	
	for (int i = 0; i < array_length; i++) {
		cout << bool_array[i] << " ";
	}

		
	return 0;
}


// output : [1 1 1 0 1]


