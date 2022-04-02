// compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string>
int main512()
{
	using namespace std;
	string s1 = "?ello";
	for (char ch = 'a'; s1 != "hello"; ch++)
	{
		cout << s1 << endl;
		s1[0] = ch;
	}
	cout << "The loop terminated because " << s1 << " == \"hello\"\n";

	return 0;
}