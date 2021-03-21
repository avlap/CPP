#include "../include/std_lib_facilities.h"

void print(const string s, vector<int> v)
{
	cout << s << '\n';

	for(int i=0; i < v.size(); ++i) 
		v[i] = i;

	for(int x:v)	
		cout << v[x] << ", ";

	cout << '\n';
}

void fibonacci(const int& x, const int& y, vector<int>& v, const int& n)
{
	//fibonacci, each element is the sum of the precious numbers
	int z;
	v.push_back(x);
	v.push_back(y);
	for(int i=1; i <= n; ++i) {
		z = v[i] + v[i-1];
		v.push_back(z);
	}


	for(int x:v)
		cout << x << ", ";

	cout << '\n';

}

int main ()
{
	//const vector<int>v = {0, 2, 3, 4};
	//
	vector<int> v; 
	int x = 1;
	int y = 2;
	int n = 10;
	fibonacci(x, y, v, n);
	//const string s = "label:";	
	//print(s, v);

	return 0;

}
