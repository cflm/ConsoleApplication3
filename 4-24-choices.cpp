// choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>
int main424()
{
	using namespace std;
	vector<int> ivec;
	array<int, 10> ia;
	for (int i = 0; i < 10; i++)
		ia[i] = 10-i;
	
	for (auto& i : ia)
		cout << i << " ";
	cout << endl;
	
	for (auto i : ia)
		cout << i << " ";
	cout << endl;
	
	for (auto i : ia)
		ivec.push_back(i);
	
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	
	return 0;
}