#include "../include/std_lib_facilities.h"

double val;
//double y;
//double e;
constexpr double krone = 2.0;
constexpr double yen = 1.15;
constexpr double euro = 0.5;

char currency = ' ';

int main ()
{
	cout << "Enter the amoun of money and the currency (k(rone), y(en) or e(uro)): \n";
	cin >> val >> currency;
	switch(currency) {
		case 'k': 
			val *=krone;
			cout << "Amount is: " << val << "$\n";
			break;
		case 'a':
			val *=yen;
			cout << "Amount is: " << val << "$\n";
			break;
		case 'y':
			val *=euro;
			cout << "Amount is: " << val << "$\n";
			break;
		default: 
			cout << "Amount is unknown\n";
			break;
	}

}



