#include<iostream>
using namespace std;

int fact(int n) 
{
	int factorial = 1;
	cout << "Factorial of " << 5 << "! : ";
	
	for (int i = 1; i <= n; i++) {
		cout << i;
		n==i ? cout << " = " : cout << " x ";
		factorial *= i;
	}
	
	return factorial;
}

int main()
{
	int n;
	cin >> n;
	
	int answer = fact(n);
	
	cout << answer << endl;
	
	return 0;
}
