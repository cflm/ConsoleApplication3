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
	
	// new 从堆(heap) 或 自由存储区(free store) 的内存区域分配内存,使用完需要手动释放
	delete p;
	delete d;
	return 0;
}