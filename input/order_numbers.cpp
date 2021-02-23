#include "../include/std_lib_facilities.h"

int val1;
int val2;
int val3;

int larger;
int middle;
int smaller;

int main()
{
	cout << "Enter value 1: \n";
	cin >> val1;
	cout << "Enter value 2: \n";
	cin >> val2;
	cout << "Enter value 3: \n";
	cin >> val3;
	smaller = val1;
	middle = val2;
	larger = val3;
	//if (val1 == val2) {
	//		smaller = val1;
	//		larger = val2;
	if (val1 > val2) {
		smaller = val2;
		larger = val1;
	} else if (val1 < val2) {
		smaller = val1;
		larger = val2;
	} else if (val1 == val2) {
			smaller = val1;
			larger = val2;
			middle = val2;
	}

	if (val3 > larger) {
		//smaller = middle;
		middle = larger;
		larger = val3;
	} else if (val3 < smaller) {
		middle = smaller;
		smaller = val3;
	} else if (val3 == smaller) {
		middle = val3;
	} else if (val3 == larger) {
		middle = val3;
	}
	//else {
	//	middle = val3;
	//}


	cout << smaller << "," << middle << "," << larger << '\n';

}



