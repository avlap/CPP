#include "../include/std_lib_facilities.h"


void quadratic_equation(double a, double b, double c)
{

	double x1, x2, divider, part0, part1 ; //part of equation
	
	part0 = (b*b) - (4* (a*c));
	if(part0 < 0) error("(b*b - 4ac smaller then zero.\n");
	part1 = sqrt((b*b) - (4* (a*c)));
	x1 = (-b + part1) / (2*a);
	x2 = (-b - part1) / (2*a);

	cout << x1 << '\n';
	cout << x2 << '\n';

}

int main()
{
	
	double a, b, c;
	cin >> a >> b >> c;
	quadratic_equation(a, b, c);


}


