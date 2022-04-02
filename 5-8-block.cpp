// block.cpp -- use a block statement
#include <iostream>
int main58()
{
	using namespace std;
	cout << "The Amazing Account will sum and average ";
	cout << "five number for you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i < 6; i++)
	{ // block start
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	} // block end
	cout << "sum: " << sum << endl;
	cout << "average: " << sum/5 << endl;
	return 0;
}