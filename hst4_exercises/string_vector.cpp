

#include "../include/std_lib_facilities.h"

int main ()
{
	int val0;
	string val1;
	int output0;
	//int output1;
	vector<string>values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	cin >> val1;

	for (int i = 0; i < values.size(); ++i) {
		if (val1 == values[i]) {
			output0 = i;
		} 
	}
	

//	for (int i =0; i <=10; ++i) {
//		if (val1 == "i") {
//			output0 = i;
//		}
//		++i;
//}







	cout << output0 << '\n';
	cout << values.size() << '\n';

	//	for(int x:values) ++1;

}


