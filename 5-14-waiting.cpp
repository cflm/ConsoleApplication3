// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>

int main514()
{
	using namespace std;
	cout << "Enter the delay: ";
	float delay;
	cin >> delay;
	clock_t start = clock();
	while (clock() - start < delay * CLOCKS_PER_SEC)
		;
	cout << "Done!\n";
	return 0;
}