//std::vector::insert() is a built-in function in C++ STL that inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.

//Time Complexity � Linear O(N)

//vector_name.insert (position, val)


#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vector_name{1, 2, 3, 4, 5};

	cout << "Origin vector:" << endl;
	for (auto x : vector_name) {
		cout << x << " ";
	}

	cout << "\n";

    vector_name.insert(vector_name.begin() + 2, 3, 7);

    
	for (auto x : vector_name) {
		cout << x << " ";
	}
}


