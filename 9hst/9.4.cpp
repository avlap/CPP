#include "../include/std_lib_facilities.h"

struct Date {
	int y;
	int m;
	int d;

};

int main()
{
	Date d;
	d.y = {1978};
	d.m = {6};
	d.d = {25};

	cout << d.d << '-'<< d.m << '-' << d.y << '\n';

}
