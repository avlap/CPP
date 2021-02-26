#include "../include/std_lib_facilities.h"

int main ()
{
	double val0;
	double val1;
	double small;
	double large;
	//int temp;
	//int i = 0;
	//cout << "Please enter 2 values: \n";
	while(cin >> val0 >> val1) {
		//cin >> val0 >> val1;
		if(val0 > val1) { 
			small = val1;
			large = val0;
			cout << "The smaller value is: " << small << " The larger value is: " << large << '\n';
		} else if (val0 < val1) {
				small = val0;
				large = val1;
				cout << "The smaller value is: " << small << " The larger value is: " << large << '\n';
		} else
			cout << "Both values are equal\n";
		
		if (large - small <= 1.0/100) 
			cout << "The values are almost equal\n";

	//	++i;
	}
	

}


