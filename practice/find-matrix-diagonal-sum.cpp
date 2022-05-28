#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the dimension of the matrix: ";
	cin >> n;
	
	int arr[n][n];
	
	cout << "Enter the matrix values: " << endl;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "arr[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
	
	int sumOfLeftCorner = 0;
	int sumOfRightCorner = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				sumOfLeftCorner += arr[i][j];
			}
			if (j == n-1 - i) {
				sumOfRightCorner += arr[i][j];
			}
		}
	}
	cout << "Sum of left corner: " << sumOfLeftCorner << endl;
	cout << "Sum of Right corner: " << sumOfRightCorner << endl;
}
