#include "../include/std_lib_facilities.h"

struct Date {
	int y, m, d;
	Date(int y, int m, int d);
	void add_day(int n);

};

//void init_day(Date& dd, int y, int m, int d)



//void add_day(Date& dd, int n)

int main()
{
	Date today{1978, 6, 25};
	//Date tomorrow;

	//init_day(today, 1987, 6, 25);

	//today.y = {1978};
	//today.m = {6};
	//today.d = {25};

	//tomorrow.d = add_day(today, 1);
	//tomorrow.y = today.y;
	//tomorrow.m = today.m;

	cout << today.y << '\n';

}
