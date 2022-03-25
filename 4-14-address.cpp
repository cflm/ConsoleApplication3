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
	
	// 在对指针进行解引用操作之前, 必须将指针初始化为一个确定的适当的地点.

	return 0;
}