#include<iostream>
#include<climits>
using namespace std;

int check_overflow(int num1, int num2) 
{
	if (num1 > INT_MAX - num2) {
		
		return -1;
	}
	
	return num1 + num2;
}

int main() 
{
	// We know int_max = 2147483647
	// If num1 + num2 > INT_MAX, overflow occured
	
	int num1 = 2147483627;
	int num2 = 20;
	
	
	int result = check_overflow(num1, num2);
	
	if (result == -1) {
		cout << "Integer overflow occured.";
	} else {
		cout << result;
		
	}
	
	return 0;
}

//output: 
