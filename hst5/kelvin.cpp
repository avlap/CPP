#include "../include/std_lib_facilities.h"

double ctook(double c) //converts celcius to Kelvin
{
	double k = c + 273.15; 
	//if (c < -273.15) error("Value can't be lower then -273.15C\n");
	return k; 
}

double kelvin_to_c(double k) //converts kelvin to celcius
{
	double ck = k - 273.15;
	return ck;

}


int main ()
{

	char unit = ' ';	
	double c;
	cin >> c >> unit;
	if(unit == 'c') {
		if (c < -273.15) error("Value can't be lower then -273.15C\n");
		double k = ctook(c);
		cout << "Kelvin: " << k <<'\n';
	} else if(unit == 'k') {
		double ck = kelvin_to_c(c);
		cout << "Celcius: " << ck <<'\n';
	} else
		cout << "Error: unknown unit!\n";

	
}


