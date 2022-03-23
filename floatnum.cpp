// floatnum.cpp -- floating point types
#include <iostream>
int main38()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point ��ʾС������0
	float tub = 10.0 / 3.0; // good to about 6 places
	double mint = 10.0 / 3.0; // good to about 15 places
	const float million = 1.0e6;

	cout << "tub=" << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nand ten million tubs = " << 10 * million * tub << endl;

	cout << "mint=" << tub;
	cout << ", a million mints = " << million * mint<< endl;

	//��д���㳣��ʱ, Ĭ�ϱ���Ϊdouble, 
	//���Ҫ����Ϊfloat ��ʹ��f��F��׺, ��1.234f, 2.34E20F
	//���Ҫ����Ϊlong double,  ��ʹ��L��l��׺,  2.2L

	//��ȷ��
	float a = 2.34E22F;
	float b = a + 1.0F;
	cout << "a=" << a << endl;
	cout << "b-a=" << b - a << endl; // ��� 0.000000
	// float����ֻ�ܱ�ʾ���ֵ�ǰ��λ��ǰ��λ, ����޸ĵ�23λ�������ֵ������Ӱ��;
	return 0;
}