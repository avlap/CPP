#include "../include/std_lib_facilities.h"

//function that returns the largest element of a vector argument
//
void maxv(vector<double>& v)
{
	sort(v);

	double max = v[v.size() -1];

	cout << max << '\n';

}


int main()
{
	vector<double> v;
	//= {0, 3, 8, 2};
	for(double temp; cin>>temp;)
		v.push_back(temp);

	maxv(v);

}
