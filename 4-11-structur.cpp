// structur.cpp -- a simple structure
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main411() {
	using namespace std;
	inflatable guest =
	{
		"Gloriour Floria",
		1.88,
		29.99
	};

	inflatable pal = {"Audacious Arthur", 3.23, 32.99};

	cout << "guest name:" << guest.name << endl;
	cout << "pal name:" << pal.name << endl;

	cout << "sum price:" << guest.price + pal.price << endl;

	return 0;

}