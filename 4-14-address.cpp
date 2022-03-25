// address.cpp -- using the & operator to find address
#include <iostream>
int main414()
{
	using namespace std;
	int number = 10;
	cout << "The address of number is " << &number << endl;
	cout << "The value of number is " << number << endl;
	
	int* p = &number;
	cout << "The address of number is " << p << endl;
	cout << "The value of number is " << *p << endl;
	
	*p = *p + 1;
	cout << "The value of number is " << *p << endl;
	cout << "The value of number is " << number << endl;
	
	// �ڶ�ָ����н����ò���֮ǰ, ���뽫ָ���ʼ��Ϊһ��ȷ�����ʵ��ĵص�.

	return 0;
}