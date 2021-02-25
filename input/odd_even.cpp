#include "../include/std_lib_facilities.h"

int val;

int main ()
{
	cout << "Enter a number to check if it's odd or even: \n";
	cin >> val;
	if (val % 2 != 0) 
		cout << "The number " << val << " is odd!\n";
	else
		cout << "The number " << val << " is even!\n";

}



