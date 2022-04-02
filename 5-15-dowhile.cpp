// dowhile.cpp -- exit-condition loop
#include <iostream>
int main515()
{
	using namespace std;
	int n;
	cout << "Enter a number in range 1~10 to ";
	cout << "find the favorite number\n";
	do {
		cin >> n;
	} while (n != 7);
	cout << "The favorite number is " << n << endl;
	return 0;
}