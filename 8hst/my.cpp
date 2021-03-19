#include "../include/std_lib_facilities.h"
#include "my.h"

void print_foo(int foo)
{
  cout << "FOOOO..." << foo << '\n';	

}

void print(int i)
{
	cout << "value of i: " << i << '\n';

}

void swap_v(int, int)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap_r(int&, int&)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap_cr(const int&, const int&)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


