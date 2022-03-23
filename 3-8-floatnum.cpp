// floatnum.cpp -- floating point types
#include <iostream>
int main38()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point 显示小数点后的0
	float tub = 10.0 / 3.0; // good to about 6 places
	double mint = 10.0 / 3.0; // good to about 15 places
	const float million = 1.0e6;

	cout << "tub=" << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nand ten million tubs = " << 10 * million * tub << endl;

	cout << "mint=" << tub;
	cout << ", a million mints = " << million * mint<< endl;

	//书写浮点常量时, 默认保存为double, 
	//如果要保存为float 则使用f或F后缀, 如1.234f, 2.34E20F
	//如果要保存为long double,  则使用L或l后缀,  2.2L

	//精确性
	float a = 2.34E22F;
	float b = a + 1.0F;
	cout << "a=" << a << endl;
	cout << "b-a=" << b - a << endl; // 输出 0.000000
	// float类型只能表示数字的前六位或前七位, 因此修改第23位将对这个值不产生影响;
	return 0;
}