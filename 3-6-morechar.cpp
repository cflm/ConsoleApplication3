// morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main366()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "code +1" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// using cout.put() member function to display a char
	// . ����Ϊ��Ա����� ������(cout)���Ա����put()
	cout << "cout.put(ch)" << endl;
	cout.put(ch);
	cout.put('!');
	cout << endl;

	cout << "\aOperation \"HyperHype\" is now actived!\n";
	cout << "Enter your code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered: " << code << "...\n";

	int k\u00F6rper = 0;
	cout << "Let them eat g\u00E2teau.\n";

	// true תΪ1, falseתΪ0
	// ��0ֵ��ת��Ϊ true, ��Ϊfalse
	bool a = 0;
	bool b = -10;
	bool c = 100;
	cout<<"a:" << a << "\nb:" << b <<"\nc:" << c << endl;

	return 0;
}