// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>
int main59()
{
	using namespace std;
	cout << "Enter strings:\n";
	string word;
	cin >> word;
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; i--, j++)
	{
		cout<< i<< " " << j << endl;
		temp = word[j];
		word[j] = word[i];
		word[i] = temp;
	}
	cout << word << endl;
	
	return 0;	
}