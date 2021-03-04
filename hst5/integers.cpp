
#include "../include/std_lib_facilities.h"

void num_int(int x, int y)
{
	cout << "Please enter the number of values you want to sum: \n";
	cin >> x;

	vector<int>integers;
	cout << "Please enter some integers (press '|' to stop): \n";
	for(y; cin >> y;)
		integers.push_back(y);

	if(x>integers.size()) error("You didn't enter enough integers!\n");

	int sum = 0;
	for(int i =0; i<x; ++i)
		sum +=integers[i];


	cout << "The sum of the first " << x << " numbers is: " << sum << '\n';

}


int main()
{
	int x, y;
 	num_int(x, y);

}


