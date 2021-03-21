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

void fibonacci(int x, int y, vector<int> v, int n)
{
	//fibonacci, each element is the sum of the precious numbers
	//v[2] = v[0] + v[1];
	//v[0] = x;
	//v[1] = y;
	//n=10;
	//v.push_back();
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
