#include "../include/std_lib_facilities.h"

int main ()
{
	int val;
	//double val1;
	//double small;
	//double large;
	vector<int>numbers;
	int max_mode = 0;
	int temp_mode = 0;
	int mode;
	//	char unit = ' ';
	//int temp;
	//int i = 0;
	//cout << "Please enter 2 values: \n";
	while(cin >> val) {
		//cin >> val0 >> val1;

		for (int i =0; i < numbers.size(); ++i) {
			if(val == numbers[i])
				++temp_mode;
		}

		if(temp_mode > max_mode) {
			mode = val;
			max_mode = temp_mode;
			temp_mode = 0;
		}

		numbers.push_back(val);

	}

	cout << "Numbers: \n";
	for (int i =0; i < numbers.size(); ++i) {
		cout <<  numbers[i] << '\n';
	}
	cout << "Mode: " << mode << '\n';



}


