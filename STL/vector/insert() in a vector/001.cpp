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

	cout << "Vector after inserting 100 at position 3: " << endl;
	vector_name.insert(vector_name.begin() + 3, 100);
	for (auto x : vector_name) {
		cout << x << " ";
	}

	cout << "\n";

	cout << "Vector after inserting 500 at position 1: " << endl;
	vector_name.insert(vector_name.begin() + 1, 500);
	for (int x : vector_name) {
		cout << x << " ";
	}
	cout << "\n";

	// Experiment

	cout << "Inserting negative value: " << endl;
	vector_name.insert(vector_name.begin() + 2, -7);
	for (int x : vector_name) {
		cout << x << " ";
	}
	
	cout << "\n";
	
	cout << "Inserting in negative position: " << endl;
	vector_name.insert(vector_name.begin() - 2, 7);
	for (int x : vector_name) {
		cout << x << " ";
	}

	output : 
	
	cout << "\n";
	// output : 134255906 1 500 2 3 100 4 5
	// garbeg value


	cout << "Position is not available: ";
	vector_name.insert(vector_name.begin() + 100, 7);
	for (int x : vector_name) {
		cout << x << " ";
	}
	// output : nothing happend

	cout << "\n";
	

}


