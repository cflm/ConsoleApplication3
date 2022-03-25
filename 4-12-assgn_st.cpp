// assgn_st.cpp -- assgning structures
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main412() {
	using namespace std;
	inflatable guest =
	{
		"Gloriour Floria",
		1.88f,
		29.99
	};

	inflatable pal{};
	cout << "pal name:" << pal.name << endl;
	
	pal = guest;
	cout << "guest:" << guest.name << endl;
	cout << "guest:" << guest.name << guest.price << guest.volume << endl;

	cout << "after assgn:" << pal.name << pal.price <<pal.volume<< endl;
	
	// 结构数组
	inflatable guests[3] =
	{
		{ "Glorious Floria1", 1.88f, 19.99 },
		{ "Glorious Floria2", 2.88f, 29.99 },
		{ "Glorious Floria3", 3.88f, 39.99 }
	};

	return 0;

}