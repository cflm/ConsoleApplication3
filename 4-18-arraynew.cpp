// arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main418()
{
	using namespace std;
	double* p3 = new double[3];
	p3[0] = 3.14159;
	p3[1] = 1.41421;
	p3[2] = 2.71828;
	cout << "p3[0] = " << p3[0] << ", address=" << &p3[0] << endl;
	cout << "p3[1] = " << p3[1] << ", address=" << &p3[1] << endl;
	cout << "p3[2] = " << p3[2] << ", address=" << &p3[2] << endl;
	cout << endl;
	
	p3 = p3 + 1; // increment the pointer
	cout << "p3[0] = " << p3[0] << ", address=" << &p3[0] << endl;
	cout << "p3[1] = " << p3[1] << ", address=" << &p3[1] << endl;
	cout << "p3[2] = " << p3[2] << ", address=" << &p3[2] << endl;
	cout << endl;

	p3 = p3 - 1; // point back to beginning
	cout << "p3[0] = " << p3[0] << ", address=" << &p3[0] << endl;
	cout << "p3[1] = " << p3[1] << ", address=" << &p3[1] << endl;
	cout << "p3[2] = " << p3[2] << ", address=" << &p3[2] << endl;
	
	delete[] p3;
	return 0;
}