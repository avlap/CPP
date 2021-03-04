#include "../include/std_lib_facilities.h"

double ctok(double c) //converts celcius to Kelvin
{
	double k = c + 273.15; 
	if (c < -273.15) error("Value can't be lower then -273.15C\n"); //Kelvin can't go lower then 0
	return k; 
}

double ktoc(double k) //converts kelvin to celcius
{
	double ck = k - 273.15;
	if (k < 0) error("Kelvin can't be smaller then 0!\n"); //Kelvin can't go lower then 0
	return ck;

}


int main ()
{

	char unit;	
	double c;
	cin >> c >> unit; //read input from console, a double for temperature and a unit for celcius or kelvin
	if(unit == 'c') {
		if (c < -273.15) error("Value can't be lower then -273.15C\n");
		double k = ctok(c);
		cout << "Kelvin: " << k <<'\n';
	} else if(unit == 'k') {
		double ck = ktoc(c);
		cout << "Celcius: " << ck <<'\n';
	} else
		cout << "Error: unknown unit!\n";

}


