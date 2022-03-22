// limits.cpp -- some integer limits
#include <iostream>
#include <climits>

int main2()
{
	using namespace std;

	int n_int8 = INT8_MAX;
	int n_int16 = INT16_MAX;
	int n_int32 = INT32_MAX;

	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "n_int8 is " << sizeof(n_int8) << " bytes." << endl;
	cout << "n_int16 is " << sizeof(n_int16) << " bytes." << endl;
	cout << "n_int32 is " << sizeof(n_int32) << " bytes." << endl;
	cout << "n_short is " << sizeof(n_short) << " bytes." << endl;
	cout << "n_long is " << sizeof(n_long) << " bytes." << endl;
	cout << "n_llong is " << sizeof n_llong << " bytes." << endl; // 对于变量名 sizeof(n_llong) 可以不要括号

	cout << "max:" << endl;
	cout << "n_int8 = " << n_int8 << endl;
	cout << "n_int16 = " << n_int16 << endl;
	cout << "n_int32 = " << n_int32 << endl;
	cout << "un_int32 = " << UINT_MAX << endl;
	cout << "n_short = " << n_short << endl;
	cout << "n_long = " << n_long << endl;
	cout << "n_llong = " << n_llong << endl;

	cout << "Bit per byte = " << CHAR_BIT << endl; // char的位数
	cout << "CHAR_MAX = " << CHAR_MAX << endl; // char的位数


	// C++11 初始化方式 大括号初始化器 用于 单值变量
	int i1 = { 12 }; // i1=12
	int i2{ 12 }; // i2=12
	int i3 = {}; // i3=0
	int i4{}; // i4=0


	return 0;
}
