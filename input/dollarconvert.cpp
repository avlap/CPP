#include "../include/std_lib_facilities.h"

double val;
//double y;
//double e;
double krone = 2.0;
double yen = 1.15;
double euro = 0.5;

char currency = ' ';

int main ()
{
	cout << "Enter the amoun of money and the currency (k(rone), y(en) or e(uro)): \n";
	cin >> val >> currency;
	if (currency == 'k') { 
		val *=krone;
		cout << "Amount is: " << val << "$\n";
	} else if (currency == 'y') {
		val *=yen;
		cout << "Amount is: " << val << "$\n";
	} else if (currency == 'e') {
		val *=euro;
		cout << "Amount is: " << val << "$\n";
	} else 
		cout << "Amount is unknown\n";

}



