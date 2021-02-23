#include "../include/std_lib_facilities.h"
int main ()
{

	int a = 2000;
	char c = a;
	int b = c;
	if (a != b)
		cout << "oops!: "<< a << "!=" << b << '\n';
	else
		cout << "Wow! We have large characters\n";

}
