#include "../include/std_lib_facilities.h"

//function that returns the largest element and smallest element of a vector argument
vector<double> maxv(vector<double>& v)
{
	sort(v);
	
	vector<double> m;
	double max = v[v.size() -1];
	double min = v[0];
	m.push_back(min);
	m.push_back(max);

	return m;
	//return min;

}

int main()
{
	vector<double> v;
	//= {0, 3, 8, 2};
	for(double temp; cin>>temp;)
		v.push_back(temp);

	vector<double> m = maxv(v);
	cout << "Max is: " << m[1] << '\n';
	cout << "Min is: " << m[0] << '\n';

}
