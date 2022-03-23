// arith.cpp -- some C++ arithmetic
// 加减乘除,取模
#include <iostream>
#include <vector>
int main310()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "整数除法: 9/5 =" << 9 / 5 << endl;
	cout << "浮点数除法: 9.0/5.0 =" << 9.0 / 5.0 << endl;
	cout << "混合数除法: 9.0/5 =" << 9.0 / 5 << endl;
	cout << "float 除法: 1e7/9 =" << 1e7 / 9 << endl;		//1111111.111111
	cout << "double 除法: 1e7F/9F =" << 1e7F / 9.0F << endl;		//1111111.125000

	vector<double> scores;
	auto pv = scores.begin();  // 
	//vector<double>::iterator pv = scores.begin();  // 自动类型推导 便于编写代码
	return 0;
}