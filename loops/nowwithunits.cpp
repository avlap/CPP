#include "../include/std_lib_facilities.h"

int main ()
{
	constexpr double meter = 100.0;
	constexpr double inch = 2.54;
	constexpr double feet = (12*2.54);

	double val0;
	double small = ' ';
	double large;

	int number = 0;
	double sum;

	string unit;

	vector<double>values;

	while(cin >> val0 >> unit) {
		//cin >> val0 >> val1;
		++number;
		if(unit == "m" || unit == " m") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 = val0;
			//val0 *=meter; 
		} else if (unit == "cm" || unit == " cm") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 /=100;
		} else if (unit == "in" || unit == " in") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 = (val0 * inch) / 100;
		} else if (unit == "ft" || unit == " ft") {
			cout << "Entered number is: " << val0 << unit << '\n';
			val0 = (val0 * feet) / 100;
		} else {
			cout << "unknown unit!\n";
			//val0 = 0;
		}

		if (val0 < small) {
			small = val0;
					} 
		if (val0 > large) {
			large = val0;
			
		}

		//val0 /= meter;
		sum += val0;
		values.push_back(val0);

		

	}
	cout << "Number of numbers: " << number << '\n';
	cout << "The entered numbers are: \n";
	for(int x:values)
		cout << x << ", ";
	cout << '\n';
	cout << "The number " << small << "m is the smallest number.\n";
	cout << "The number " << large << "m is the largest number.\n";
	cout << "Sum: " << sum << "m\n";

}


