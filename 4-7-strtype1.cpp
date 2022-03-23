// strings.cpp -- storing strings in array
#include <iostream>
#include <string>

int main47()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "Enter charr1" << endl;
	cin >> charr1;
	cout << "Enter str1" << endl;
	cin >> str1;

	cout << charr1 << charr2 << str1 << str2 << endl;
	cout << charr2 << " " << charr2[2] << endl;
	cout << str2 << " " << str2[2] << endl;


	return 0;
}