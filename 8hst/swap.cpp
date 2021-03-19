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



int main()
{
	

	//swap
	int x{7};
	int y{9};

	swap_r(x, y);
	cout << "x: " << x << "y: " << y << '\n'; //pass by value, makes a copy

	

	
}
