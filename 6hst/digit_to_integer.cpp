#include "../include/std_lib_facilities.h"

class Digit {
	public:
		int dig; 
		int number;
};

int main()
{

	char nul = '0';
	int amount = 0;

	vector<int>digit;
	for(char tmp_digit; cin >> tmp_digit;) {
		tmp_digit -=nul;
		digit.push_back(tmp_digit);
	}

	for(int i=0; i < digit.size(); ++i) {
		switch(i) {
			case 0:
				int zero = digit[i];
				break;
		
		}


		

	}

		//for(char x:digit)
		//x -=nul;

	//for(Digit x:digit)
	//	cout << digit.dig << " , " << digit.number << '\n';

	//for(int i= amount; i >= 0; --i) 
	//cout << 
	
	//cout << '\n';

	//cout << amount << '\n';

}
