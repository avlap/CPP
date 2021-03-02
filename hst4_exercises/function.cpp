#include "../include/std_lib_facilities.h"

double add(double x, double y)
{
	double sum;
	sum = x + y;
	return sum;
}

int main ()
{
	double x, y, output;
	cin >> x >> y;
	output = add(x, y);
	cout << x << " + " << y << " = " << output << '\n';
}




