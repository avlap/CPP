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

	int zero = 0;
	int one = 0;
	int two = 0;
	int three = 0; 
	int four = 0;

	int number;

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
				cout << " is " << zero << " zeros";
				break;
			case 1:
				one = digit[digit.size()-2];
				cout << ", " << one << " tens";
				break;
			case 2:
				two = digit[digit.size()-3];
				break;
			default:
				error("No number entered");
				break;



		}
			
	}
	//	if(i == digit.size()-1)
	//zero = digit[digit.size() -1];
		
		


		

	

	

//	cout << ' ' << "is " << zero << " zeros " << one << " tens, ";

	cout << '\n';

		//for(char x:digit)
		//x -=nul;

	//for(Digit x:digit)
	//	cout << digit.dig << " , " << digit.number << '\n';

	//for(int i= amount; i >= 0; --i) 
	//cout << 
	
	//cout << '\n';

	//cout << amount << '\n';

}
