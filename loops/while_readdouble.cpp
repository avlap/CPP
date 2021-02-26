#include "../include/std_lib_facilities.h"

int main ()
{
	double val0;
	double val1;
	//int temp;
	//int i = 0;
	//cout << "Please enter 2 values: \n";
	while(cin >> val0 >> val1) {
		//cin >> val0 >> val1;
		if(val0 > val1) { 
			cout << "The smaller value is: " << val1 << " The larger value is: " << val0 << '\n';
		} else if (val0 < val1) {
				cout << "The smaller value is: " << val0 << " The larger value is: " << val1 << '\n';
		} else
			cout << "Both values are equal\n";

	//	++i;
	}
	

}


