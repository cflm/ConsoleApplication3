// arrstruc.cpp -- an array of structures
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

union one4all
{
	int i;
	float f;
	double d;
	char c;
};


int main413()
{
	using namespace std;
	inflatable guests[2] = {
		{"Bambi", 0.0f, 20.0},
		{"Godzilla", 1000.0f, 2000.0}
	};
	cout << "Bambi's volume is " << guests[0].volume << " cubic feet.\n";
	cout << "Godzilla's volume is " << guests[1].volume << " cubic feet.\n";
	
	one4all pail;
	pail.i = 1234;
	cout << "pail.i = " << pail.i << endl;
	cout << "pail.f = " << pail.f << endl;
	cout << "pail.d = " << pail.d << endl;
	cout << "pail.c = " << pail.c << endl;

	pail.f = 1234;
	cout << "pail.i = " << pail.i << endl;
	cout << "pail.f = " << pail.f << endl;
	cout << "pail.d = " << pail.d << endl;
	cout << "pail.c = " << pail.c << endl;

	pail.d = 1234;
	cout << "pail.i = " << pail.i << endl;
	cout << "pail.f = " << pail.f << endl;
	cout << "pail.d = " << pail.d << endl;
	cout << "pail.c = " << pail.c << endl;
	
	pail.c = 'C';
	cout << "pail.i = " << pail.i << endl;
	cout << "pail.f = " << pail.f << endl;
	cout << "pail.d = " << pail.d << endl;
	cout << "pail.c = " << pail.c << endl;
	
	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
	spectrum band;
	band = red;
	cout << "band = " << band << endl;
	

	return 0;

}