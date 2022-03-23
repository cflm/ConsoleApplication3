// strings.cpp -- storing strings in array
#include <iostream>
#include <cstring>

int main42()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";
	cin >> name1;
	cout << name1[0] << endl;
	cout << strlen(name1) << endl;
	cout << sizeof(name1) << endl;

	cout << strlen(name2) << endl;
	name2[3] = '\0';
	cout << name2 << endl;
	cout << strlen(name2) << endl;
	cout << sizeof(name2) << endl;

	return 0;
}