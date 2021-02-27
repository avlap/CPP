

#include "../include/std_lib_facilities.h"

int main ()
{
	double val0;
	double val1;
	double output;

	char operations = ' ';

	cout << "What do you want to calculate: \n";
	cin >> val0 >> operations >> val1;
	switch(operations) {
	case '*':
		output = val0 * val1;
		cout << "Output: " << output << '\n';
		break;
	case '/':
		output = val0 / val1;
		cout << "Output: " << output << '\n';
		break;
	case '-':
		output = val0 - val1;
		cout << "Output: " << output << '\n';
		break;
	case '+':
		output = val0 + val1;
		cout << "Output: " << output << '\n';
		break;
	}

}

 
