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

Minmax maxv(vector<double> v)
{
	Minmax m;
	sort(v);

	m.max = v[v.size() -1];
	m.min = v[0];

	//cout << max << '\n';
	
	return m;

}


int main()
{
	vector<double> v;
	//= {0, 3, 8, 2};
	for(double temp; cin>>temp;)
		v.push_back(temp);

	Minmax m = maxv(v);
	cout << "Max is: " << m.max << '\n';
	cout << "Min is: " << m.min << '\n';
	

}
