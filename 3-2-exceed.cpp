// exceed.cpp -- exceeding some integer limits
// ��ʾ���ʹ���޷�������, ��˵����ͼ��Խ���ε��������ʱ�������Ľ��
#include <iostream>
#define ZERO  0
#include <climits>
int main32()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Poor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Lucky Sue!" << endl;


	return 0;
}