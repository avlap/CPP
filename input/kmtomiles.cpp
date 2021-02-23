#include "../include/std_lib_facilities.h"

int val1;
int val2;
int difference;

int main()
{
	cout << "Enter value 1: \n";
	cin >> val1;
	cout << "Enter value 2: \n";
	cin >> val2;
	difference = abs(val1 - val2);
    	
	if (val1 == val2)
		cout << val1 " and" << val2 << " are of the same size!\n";
	else if (val1 > val2)
	    //difference = (val1 - val2); 	
		cout << val1 << " is larger then" << val2 << " difference = " << difference << '\n';
	else if (val1 < val2)
		//difference = (val2 - val1);
		cout << val1 << " is smaller then" << val2 << " difference = " << difference << '\n';
}



