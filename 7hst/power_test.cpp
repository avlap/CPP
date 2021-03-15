#include "../include/std_lib_facilities.h"

double power(int x, int y)
{
	for(int i = y; y >=1; --y)
		x *= x;
	return x;
}

int main()
{

	double x = power(2,4);

	cout << x << '\n';

}
