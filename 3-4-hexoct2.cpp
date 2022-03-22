// hexoct.cpp -- display values in hex and oct
#include <iostream>
using namespace std;
int main34()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "chest=" << chest << " {decimal for 42}" << endl;
	cout << hex;
	cout << "waist=" << chest << " {hexadecimal for 42}" << endl;
	cout << oct;
	cout << "inseam=" << chest << " {octal for 42}" << endl;

	return 0;
}