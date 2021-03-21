#include "../include/std_lib_facilities.h"

//function reverse order in a vector
//leaving the original vector unchanged
void reverse0(const vector<int>& v)
{

	vector<int> v_rev;

	for(int i = v.size() -1; i >= 0; --i)
		v_rev.push_back(v[i]);

	for(int x:v_rev)
		cout << x << ", ";

	cout << '\n';

}

void reverse1(vector<int> v)
{

	//hint swap
	//temp = a;
	//a = b;
	//b = temp;
	//
	//temp = v[size - 1];
	//v[size -1] = v[0];
	//v[0] = v[size -1];
	int temp;
	const int size = v.size()-1;

	for(int i=0; i < v.size(); ++i) {
		temp = v[i];
		v[i] = v[size -i];
		v[size -i] = temp;
		cout << v[i] << ", " << v[size -i] << '\n';
	}
	// 1 : 5
	// 2 : 4
	// 3 : 3
	// 4 

	for(int i=0; i < v.size(); ++i)
		cout << v[i] << ", ";

	cout << '\n';


}

int main()
{
	vector<int> v = {1,2,3,4,5};

	reverse1(v);

}



