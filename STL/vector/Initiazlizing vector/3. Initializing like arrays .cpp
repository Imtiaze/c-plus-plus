// CPP program to create an empty vector
// and push values one by one.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vect{10, 20, 30};
	
	for (int x : vect) {
		cout << x << " ";
	}
	
	return 0;
}

//Output
//10 20 30
