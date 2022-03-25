// addpntrs.cpp -- pointer addition
#include <iostream>
int main419()
{
	using namespace std;
	double wages[3] = { 25.7, 28.8, 30.5 };
	short stacks[3] = { 1, 2, 3 };
	
	double* pw = wages;
	short* ps = &stacks[0];
	
	cout << "wages: " << *pw << endl;
	cout << "stacks: " << *ps << endl;
	
	cout << "pw=" << pw << ", *pw=" << *pw << endl;
	cout << "ps=" << ps << ", *ps=" << *ps << endl;
	// 将指针变量加一后, 增加的值等于指向的类型占用的字节数
	pw++;
	ps++;
	cout << "pw=" << pw << ", *pw=" << *pw << endl;
	cout << "ps=" << ps << ", *ps=" << *ps << endl;
	
	cout << "stacks[0]=" << stacks[0] << endl;
	cout << "stacks[1]=" << stacks[1] << endl;
	cout << "stacks[2]=" << stacks[2] << endl;
	
	cout << "*stacks=" << *stacks << endl;
	cout << "*(stacks+1)=" << *(stacks + 1) << endl;
	cout << "*(stacks+2)=" << *(stacks + 2) << endl;	
	
	return 0;
}