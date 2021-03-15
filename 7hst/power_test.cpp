#include "../include/std_lib_facilities.h"

double power(int x, int y)
{
	int r;
	for(int i = y; y >=1; --y) {
		r += (x * x);
		cout << r << '\n';
	}

	return r;
}

int main()
{

	double x = power(2,4);

	cout << x << '\n';

}
