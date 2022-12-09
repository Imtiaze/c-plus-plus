#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect(10);
	int value = 5;
	
	fill(vect.begin(), vect.end(), value);
	
	for (int x : vect) {
		cout << x << " ";
	}
	return 0;
}

