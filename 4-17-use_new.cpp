// use_new.cpp -- using new operator
#include <iostream>
int main417()
{
	using namespace std;
	int* p = new int;
	*p = 10;
	double* d = new double;
	*d = 20.0;
	cout << "*p = " << *p << endl;
	cout << "*d = " << *d << endl;
	
	cout << "size of *p=" << sizeof * p << ", size of p=" << sizeof p << endl;
	
	cout << "size of *d=" << sizeof * d << ", size of d=" << sizeof d << endl;
	
	// new �Ӷ�(heap) �� ���ɴ洢��(free store) ���ڴ���������ڴ�,ʹ������Ҫ�ֶ��ͷ�
	delete p;
	delete d;
	return 0;
}