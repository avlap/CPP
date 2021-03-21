#include "../include/std_lib_facilities.h"

//function reverse order in a vector
//leaving the original vector unchanged
void reverse(vector<int> v)
{

vector<int> v_rev;

	for(int i = v.size() -1; i >= 0; --i)
		v_rev.push_back(v[i]);

	for(int x:v_rev)
		cout << x << ", ";

	cout << '\n';

}

int main()
{
	vector<int> v = {1,2,3,4,5};

	reverse(v);

}



