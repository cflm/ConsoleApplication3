// exceed.cpp -- exceeding some integer limits
// 演示如何使用无符号整型, 并说明试图超越整形的最大限制时所产生的结果
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