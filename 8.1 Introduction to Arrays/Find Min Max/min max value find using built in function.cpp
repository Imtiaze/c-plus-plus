#include<iostream>
#include<climits>
using namespace std;

int main() 
{
	// Find min and max value from an array
	
	int n;
	cin >> n;
	
	int numbers[n];
	
	for(int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	
	int min_number = numbers[0]; int max_number = numbers[1];
	
	for (int i = 0; i < n; i++)
	{
		min_number = min(min_number, numbers[i]);
		max_number = max(max_number, numbers[i]);
	}
	
	cout << "Min number: " << min_number << endl;
	cout << "Max number: " << max_number << endl;
		
	return 0;
}

//output: [5, 9, 3] 
// Min number: 3
// Max number: 9

