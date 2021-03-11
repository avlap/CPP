#include "../include/std_lib_facilities.h"

int main()
{

	char nul = '0';

	int zero = 0;
	int one = 0;
	int two = 0;
	int three = 0; 


	vector<int>digit;
	for(char tmp_digit; cin >> tmp_digit;) {
		tmp_digit -=nul;
		digit.push_back(tmp_digit);
	}

	for(int x:digit)
		cout << x;

	for(int i=0; i < digit.size(); ++i) {
		switch(i) {
			case 0:
				zero = digit[digit.size()-1];
				cout << " is " << zero << " ones";
				break;
			case 1:
				one = digit[digit.size()-2];
				cout << ", " << one << " tens";
				break;
			case 2:
				two = digit[digit.size()-3];
				cout << ", " << two << " hundred";
				break;
			case 3:
				three = digit[digit.size()-4];
				cout << ", " << three << " thousand";
				break;
			default:
				error("No number entered");
				break;
		}

	}

	cout << ".\n";

}
