#include "../include/std_lib_facilities.h"

string val1;
string val2;
string val3;

string larger;
string middle;
string smaller;

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
		middle = larger;
		larger = val3;
	} else if (val3 < smaller) {
		middle = smaller;
		smaller = val3;
	} else if (val3 == smaller || val3 == larger) {
		middle = val3;
	}

	cout << smaller << "," << middle << "," << larger << '\n';

}



