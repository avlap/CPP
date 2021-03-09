#include "../include/std_lib_facilities.h"

int main()
{

	char nul = '0';

	vector<int>digit;
	for(char tmp_digit; cin >> tmp_digit;) {
		tmp_digit -=nul;
		digit.push_back(tmp_digit);
	}

		for(char x:digit)
		x -=nul;

	for(int x:digit)
		cout << x;
	
	cout << '\n';

}
