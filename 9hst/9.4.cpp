#include "../include/std_lib_facilities.h"

struct Date {
	int y;
	int m;
	int d;

};

void init_day(Date& dd, int y, int m, int d)
{
}

void add_day(Date& dd, int n)
{
	dd.d += n;


}

int main()
{
	Date today;
	//Date tomorrow;

	init_day(today, 1987, 6, 25);

	//today.y = {1978};
	//today.m = {6};
	//today.d = {25};

	//tomorrow.d = add_day(today, 1);
	//tomorrow.y = today.y;
	//tomorrow.m = today.m;

	cout << today << '\n';

}
