

#include "../include/std_lib_facilities.h"

int main ()
{
	//int val0;
	string val0;
	string output0;
	string output1;
	vector<string>values0 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
	vector<string>values1 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

	cin >> val0;


	for (int i =0; i < values1.size(); ++i){
		if(val0 == values1[i])
			output0 = values0[i];
	}

	for (int i =0; i < values0.size(); ++i){
		if(val0 == values0[i])
			output0 = values1[i];
	}


cout << output0 << '\n';


	
	

	






	//cout << output0 << '\n';
		//cout << "val1: " << val1 << '\n';

	//	for(int x:values) ++1;

}


