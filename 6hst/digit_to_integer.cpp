#include "../include/std_lib_facilities.h"

int main()
{
	vector<char>digit;
	for(char tmp_digit; cin >> tmp_digit;)
		digit.push_back(tmp_digit);

	for(char x:digit)
		cout << x;
	
	cout << '\n';

}
