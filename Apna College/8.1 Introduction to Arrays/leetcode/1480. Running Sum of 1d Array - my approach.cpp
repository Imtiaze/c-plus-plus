#include<iostream>
using namespace std;

int main()
{
	int nums[] = {3,1,2,10,1};
	int arr_size = sizeof(nums)/sizeof(nums[0]);
	int number;
	int constructed_array[arr_size];
	
	for (int i = 0; i < arr_size; i++) {
		number = 0;	
		for (int j = 0; j <= i; j++) {
			number += nums[j];
		}
		constructed_array[i] = number;
	}
	
	for (int i = 0; i < arr_size; i++) {
		cout << constructed_array[i] << " ";
	}
}
