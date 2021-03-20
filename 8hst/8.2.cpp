#include "../include/std_lib_facilities.h"

void print(const string s, vector<int> v)
{
	cout << s << '\n';

	for(int i=0; i < v.size(); ++i) 
		v[i] = i;
	

	//for(int x : v);
	//
	for(int x:v)	
		cout << v[x] << ", ";

	cout << '\n';
}

int main ()
{
	//const vector<int>v = {0, 2, 3, 4};
	//
	vector<int>v(10); 
	const string s = "label:";	
	print(s, v);

	return 0;

}
