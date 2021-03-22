#include "../include/std_lib_facilities.h"

//function that returns the largest element of a vector argument
//
void maxv(vector<double> v)
{
	sort(v);

	for(double x:v)
		cout << x << '\n';

}


int main()
{
	vector<double> v = {0, 3, 8, 2};

	maxv(v);

}
