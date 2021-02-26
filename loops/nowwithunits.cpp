#include "../include/std_lib_facilities.h"

int main ()
{
	constexpr double meter = 100.0;
	constexpr double inch = 2.54;
	constexpr double feet = 12*inch;

	double val0;
	double small;
	double large;

	int number = 0;

	string unit;

	while(cin >> val0 >> unit) {
		//cin >> val0 >> val1;
		++number;
		if(unit == "m" || unit == " m") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 *=meter; 
		} else if (unit == "cm" || unit == " cm") {
			cout << "Entered number is: " << val0 << unit << '\n';
		} else if (unit == "in" || unit == " in") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 *=inch;
		} else if (unit == "ft" || unit == " ft") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 *=feet;
		} else
			cout << "unknown unit!\n";

		if (val0 <= small) {
			small = val0;
			cout << "This is the smallest number so far.\n";
		} 
		if (val0 >= large) {
			large = val0;
			cout << "This is the largest number so far.\n";
		}
		cout << number << '\n';
	}
}


