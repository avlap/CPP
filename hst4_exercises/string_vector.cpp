

#include "../include/std_lib_facilities.h"

int main ()
{
	int val0;
	string val1;
	vector<string>values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	cin >> val1;

	for (int i = 0; i <= values.size(); ++i) {
		if (val1 == values[i]) {
			output = values[i];
		}
		i++;
	}







	cout << val1 << '\n';

	//	for(int x:values) ++1;

}


