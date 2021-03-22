#include "../include/std_lib_facilities.h"

//function that returns the largest element and smallest element of a vector argument
//We return a struct. We need a vector of the struct.
//how to return a struct?
//how to add elements to a struct?
//A struct is a class, which is public by default
struct Minmax {
	double max;
	double min;

};

int main ()
{

	Minmax a;

	a.max = 10;
	a.min = 2.3;

	cout << "a.max: " << a.max << '\n';
	cout << "a.min: " << a.min << '\n';

}


