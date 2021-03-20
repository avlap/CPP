#include "../include/std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap_cr(const int& a, const int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	//swap
	//int x{7};
	//int y{9};
	const int cx = 7;
	const int cy = 9;

	swap_cr(cx, j);
	//cout << "x: " << x << "y: " << y << '\n'; //pass by value, makes a copy
	
}
