// formore.cpp -- more looping with for
#include <iostream>
const int ArSize = 16; // ͨ��ʹ�� const int ������һ�������Ԫ�ظ���
int main54()
{
	using namespace std;
	long long factorials[ArSize];
	factorials[0] = factorials[1] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = factorials[i - 1] * i;
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}
