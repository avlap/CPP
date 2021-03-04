#include "../include/std_lib_facilities.h"

double ctook(double c) //converts celcius to Kelvin
{
	double k = c + 273.15; 
	//if (c < -273.15) error("Value can't be lower then -273.15C\n");
	return k; 
}


int main ()
{

	double c;
	cin >> c;
	if (c < -273.15) error("Value can't be lower then -273.15C\n");

	double k = ctook(c);
	cout << "Kelvin: " << k <<'\n';

}


