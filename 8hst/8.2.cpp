#include "../include/std_lib_facilities.h"

void print(const string s, const vector<int>& v)
{
	cout << s << '\n';

	for(int i=0; i < v.size(); ++i)
	//for(int x : v);
		cout << v[i] << ", ";

	cout << '\n';
}

int main ()
{
	const vector<int>v = {0, 2, 3, 4};
	const string s = "label:";	
	print(s, v);

	return 0;

}
