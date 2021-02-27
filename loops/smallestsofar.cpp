#include "../include/std_lib_facilities.h"

int main ()
{
	double val0;
	//double val1;
	double small;
	double large;
	char unit = ' ';
	//int temp;
	//int i = 0;
	//cout << "Please enter 2 values: \n";
	while(cin >> val0 >> unit) {
		//cin >> val0 >> val1;
		cout << "Entered number is: " << val0 << '\n';
		if (val0 <= small) {
			small = val0;
			cout << "This is the smallest number so far.\n";
		} 
		if (val0 >= large) {
			large = val0;
			cout << "This is the largest number so far.\n";
		}
	}


}


