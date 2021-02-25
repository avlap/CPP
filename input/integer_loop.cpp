#include "../include/std_lib_facilities.h"

//char a = 1;

int main ()
{
	int i = 0;
	while(i < 26) {
		cout << char('a' + i) << '\t' << i << '\n';
		++i;
	}

}



