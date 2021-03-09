#include "../include/std_lib_facilities.h"

class Digit {
	public:
		int digit; 
		int number;
};

int main()
{

	char nul = '0';
	int amount = 0;

	vector<Digit>digit;
	for(char tmp_digit; cin >> tmp_digit;) {
		++amount;
		tmp_digit -=nul;
		digit.push_back({tmp_digit, amount});
	}

		//for(char x:digit)
		//x -=nul;

	//for(int x:digit)
	//	cout << x;

	//for(int i= amount; i >= 0; --i) 
	//cout << 
	
	//cout << '\n';

	//cout << amount << '\n';

}
